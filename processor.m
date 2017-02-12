function [exectime, data] = processor(seg, data)

global lastNode firstNode messaging msg gainK;

switch seg
    case 1
        %get state
        a=data.a; ts=data.ts; wo=data.wo; P=data.P;   Q=data.Q;   dw=data.dw; dV=data.dV; f=data.f; V=data.V;
        m=data.m; n=data.n; mp=data.mp; Lv=data.Lv; ts=data.ts; t=data.t;   Vn=data.Vn; kif=data.kif; kpf=data.kpf;
        c=data.c; b=data.b; Kpg_df=data.Kpg_df; Kig_df=data.Kig_df; Kph_df=data.Kph_df; Kih_df=data.Kih_df; Ad=data.Ad;
        alfa=data.alfa;
        IC_INTEGRAL=data.IC_INTEGRAL;
        
        ia= ttAnalogIn(1);
        ib= ttAnalogIn(2);
        
        %------------------
        %Secondary control
        %------------------
        
        switch data.policy
            case 'NO_COMM'
                %tss=ts/(1+P*1e-6);
                ferror=(wo-f*2*pi);
                data.integral=data.integral+ts*ferror;
                dw=kif*data.integral+kpf*ferror;
                
                mp=0;
                n=0;
                dw=0;
                
                mp=0;
                n=0;
                t=t+ts;
                ph=(wo+dw-m*P)*t-mp*P;if ph>(2*pi) t=((ph-2*pi)+mp*P)/(wo+dw-m*P); end;
                va=(Vn+dV-n*Q)*sin(ph); vb=-(Vn+dV-n*Q)*cos(ph);
                va=va+Lv*wo*ib; vb=vb-Lv*wo*ia;
                
                p=(3/2)*(va*ia+vb*ib);q=(3/2)*(-va*ib+vb*ia);
                V=sqrt(va^2+vb^2); f=(wo+dw-m*P)/(2*pi);
                        
                %Filter active and reactive power signals
                P = (data.num(1)*p+data.num(2)*data.p-data.den(2)*data.P)/data.den(1);
                Q = (data.num(1)*q+data.num(2)*data.q-data.den(2)*data.Q)/data.den(1);
                
                %save state
                data.p=p; data.q=q; data.P=P; data.Q=Q; data.dw=dw;
                data.dV=dV; data.Vn=Vn; data.t=t; data.V=V; data.f=f;
                
                data.va=va;
                data.vb=vb;
                
                
            case 'CENTRAL'
                if a==1
                    %This is the mcc controller, it computes the correction and sends
                    %it to the rest of nodes
                    
                    %let's compute the correction
                    
                    ferror=(wo-f*2*pi);
                    data.integral=data.integral+ts*ferror;
                    dw=kif*data.integral+kpf*ferror;
                    
                    %let's send it
                    
                    ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,ferror],80);
                else
                    %this is the slave, it gets data from the network and uses
                    %it
                    
                    msg=ttGetMsg;
                    if isempty(msg)
                    else
                        dw=msg(6);
                        dv=msg(7);
                    end
                end
            case 'DISTRIBUTED1'
                
                if a==1
                    %This is the mcc controller, it computes the correction and sends
                    %it to the rest of nodes
                    
                    %let's compute the correction
                    
                    ferror=(wo-f*2*pi);
                    data.integral=data.integral+ts*ferror;
                    dw=kif*data.integral+kpf*ferror;
                    
                    %let's send it
                    
                    ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,ferror],80);
                else
                    %this is the slave, it gets data from the network and uses
                    %it
                    
                    msg=ttGetMsg;
                    if isempty(msg)
                        ferror=data.ferror;
                    else
                        f_rx=msg(2);
                        ferror=(wo-f_rx*2*pi);
                        data.ferror=ferror;
                    end
                    data.integral=data.integral+ts*ferror;
                    dw=kif*data.integral+kpf*ferror;
                end
            case 'DISTRIBUTED2'
                if a==1
                    %This is the mcc controller, it computes the correction and sends
                    %it to the rest of nodes
                    
                    %let's compute the correction
                    
                    ferror=(wo-f*2*pi);
                    data.integral=data.integral+ts*ferror;
                    dw=kif*data.integral;%+kpf*ferror;
                    
                    %let's send it
                    
                    ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,ferror],80);
                else
                    %this is the slave, it gets data from the network and uses
                    %it
                    
                    msg=ttGetMsg;
                    if isempty(msg)
                        ferror=data.ferror;
                    else
                        ferror=msg(8);
                        data.ferror=ferror;
                    end
                    data.integral=data.integral+ts*ferror;
                    dw=kif*data.integral;%+kpf*ferror;
                end
                disp( [a,data.integral]);
            case 'AVERAGING'
                %Send messages all to all
                data.dataf(a)=f;
                data.datav(a)=V;
                data.dataq(a)=Q;
                msg=ttGetMsg;
                while  ~isempty(msg)
                    data.dataf(msg(1))=msg(2);
                    data.datav(msg(1))=msg(3);
                    data.dataq(msg(1))=msg(4);
                    msg=ttGetMsg;
                end
                f_media=sum(data.dataf)/(sum(data.dataf>0));
                v_media=sum(data.datav)/(sum(data.dataf>0));
                q_media=sum(data.dataq)/(sum(data.dataf>0));
                
                ferror=(wo-f_media*2*pi);
                data.integral=data.integral+ts*ferror;
                dw=kif*data.integral+IC_INTEGRAL+kpf*ferror;
                
                ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,0],80);
                
            case 'CONSENSUS'
                
                %save current values
                data.dataf(a)=f;
                data.datav(a)=V;
                data.dataq(a)=Q;
                data.datadw(a)=dw;
                msg=ttGetMsg;
                
                %if there are messages into the queue
                while ~isempty(msg)
                    data.dataf(msg(1))=msg(2);
                    data.datav(msg(1))=msg(3);
                    data.dataq(msg(1))=msg(4);
                    data.datadw(msg(1))=msg(6);
                    msg=ttGetMsg;
                end
                
                g = 1500;
                beta = 0.01;
                gamma = 0.075;
                alpha = 1;
                  
                %%%%
                %K(k) = e(k-1)*a + b*K(k-1)
%                 if gainK
%                   data.K(a) = -data.e(a)*data.af - data.bf*data.K(a);
%                   %data.K(a)=1;
%                 end
                
                switch messaging
                    case 'customized'
                        
                        DW = data.datadw.*data.connections(a,:);
                        DW = DW(DW~=0); %remove zeros
                        
                        uc = sum(DW - dw);
                        %uc = sum(data.datadw(a) - dw);
                        %%%%%%%%%%%%%%%%%%%%%%%%%%                        
                        %uc=data.connections*data.datadw';
                        %uc=uc(a)/sum(data.connections(:,a))-sum(data.connections(:,a))*dw;
                        %%%%%%%%%%%%%%%%%%%%%%%%%%
%                         if gainK
%                            e = sum(f-data.dataf(a)) + g*(data.K(a)*50-f);
%                            data.e(a) = data.K(a)*50-f;
%                         else

                            F = data.dataf.*data.connections(a,:);
                            F = F(F~=0); %remove zeros
                            e = sum(f-F) + g*(50-f);                
%                         end
                        
                    case 'broadcast'
                        
                        uc = sum(data.datadw(1:data.num_generators) - dw);

%                         if gainK
%                             e = sum(f-data.dataf(1:data.num_generators)) + g*(data.K(a)*50-f);
%                             data.e(a) = data.K(a)*50-f;
%                         else
                            e = sum(f-data.dataf(1:data.num_generators)) + g*(50-f);     
%                         end
                end
         
                wpunt = beta*e + gamma*uc;
                data.integral = data.integral + ts*wpunt;
                dw = alpha*(data.integral - f);
                
                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                %ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,0],80);
                
                data.cont=data.cont+data.ts;
                if (data.cont>=data.tr)
                    data.cont=0;
%                     switch messaging
%                         case 'customized'
%                             if a == lastNode
%                                 target = firstNode;
%                             else
%                                 target = a+1;
%                             end
%                             ttSendMsg([1 target],[a,data.f,data.V,Q,P,dw,dV,0],80);
%                             
%                         case 'broadcast'
                            ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,0],80);
%                     end
                end
                %                 switch a
                %                     case 1 %to node 2
                %                         ttSendMsg([1 a+1],[a,data.f,data.V,Q,P,dw,dV,0],80);
                %                     case 2 %to node 3
                %                         ttSendMsg([1 3],[a,data.f,data.V,Q,P,dw,dV,0],80);
                %                     case 3 %to node 4
                %                         ttSendMsg([1 4],[a,data.f,data.V,Q,P,dw,dV,0],80);
                %                     case 4 %to node 1
                %                         ttSendMsg([1 1],[a,data.f,data.V,Q,P,dw,dV,0],80);
                %                 end
                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            case 'ORGASMUS'
                
                if data.start>ttCurrentTime
                    mp=0;
                    n=0;
                    t=t+ts;
                    ph=(wo+dw-m*P)*t-mp*P;if ph>(2*pi) t=((ph-2*pi)+mp*P)/(wo+dw-m*P); end;
                    va=(Vn+dV-n*Q)*sin(ph); vb=-(Vn+dV-n*Q)*cos(ph);
                    va=va+Lv*wo*ib; vb=vb-Lv*wo*ia;
                    
                    p=(3/2)*(va*ia+vb*ib);q=(3/2)*(-va*ib+vb*ia);
                    V=sqrt(va^2+vb^2); f=(wo+dw-m*P)/(2*pi);
                                      
                    %Filter active and reactive power signals
                    P = (data.num(1)*p+data.num(2)*data.p-data.den(2)*data.P)/data.den(1);
                    Q = (data.num(1)*q+data.num(2)*data.q-data.den(2)*data.Q)/data.den(1);
                    
                    %save state
                    data.p=p; data.q=q; data.P=P; data.Q=Q; data.dw=dw;
                    data.dV=dV; data.Vn=Vn; data.t=t; data.V=V; data.f=f;
                    
                    data.va=va;
                    data.vb=vb;
                else
                    ferror=(wo-f*2*pi+alfa*(m/kif*P-data.integral));
                    data.integral=data.integral+ts*ferror;
                    dw=kif*data.integral;
                    
                    mp=0;
                    n=0;
                    
                    mp=0;
                    n=0;
                    t=t+ts;
                    ph=(wo+dw-m*P)*t;if ph>(2*pi) t=((ph-2*pi)+mp*P)/(wo+dw-m*P); end;
                    va=(Vn+dV-n*Q)*sin(ph); vb=-(Vn+dV-n*Q)*cos(ph);
                    va=va+Lv*wo*ib; vb=vb-Lv*wo*ia;
                    
                    p=(3/2)*(va*ia+vb*ib);q=(3/2)*(-va*ib+vb*ia);
                    V=sqrt(va^2+vb^2); f=(wo+dw-m*P)/(2*pi);
                                      
                    %Filter active and reactive power signals
                    P = (data.num(1)*p+data.num(2)*data.p-data.den(2)*data.P)/data.den(1);
                    Q = (data.num(1)*q+data.num(2)*data.q-data.den(2)*data.Q)/data.den(1);
                    
                    %save state
                    data.p=p; data.q=q; data.P=P; data.Q=Q; data.dw=dw;
                    data.dV=dV; data.Vn=Vn; data.t=t; data.V=V; data.f=f;
                    
                    data.va=va;
                    data.vb=vb;
                end
            case 'DROOP_FREE'
                %Send messages all to all
                data.dataf(a)=f;
                data.datav(a)=V;
                data.dataq(a)=Q;
                data.datadw(a)=dw;
                data.datap(a)=P;
                msg=ttGetMsg;
                while  ~isempty(msg)
                    data.dataf(msg(1))=msg(2);
                    data.datav(msg(1))=msg(3);
                    data.dataq(msg(1))=msg(4);
                    data.datadw(msg(1))=msg(6);
                    data.datap(msg(1))=msg(5);
                    data.data_estimated_e(msg(1))=msg(8);
                    msg=ttGetMsg;
                end
                
                dw=c*Ad(a,:)*(data.datap-P)'/(sum(Ad(a,:))-1); %Eq (4) from droop free paper
                data.integral_w=data.integral_w+dw*ts;
                
                data.integral_8=data.integral_8+Ad(a,:)*(data.data_estimated_e-data.estimated_e)'*ts;
                data.estimated_e=V+data.integral_8; %Eq (8) from droop free paper
                
                error_e=Vn-data.estimated_e;
                
                eq_3=b*Ad(a,:)*(data.dataq-Q)'/(sum(Ad(a,:))-1); %Eq (3) from droop free paper
                data.integral_delta_1=data.integral_delta_1+error_e*ts;
                data.integral_delta_2=data.integral_delta_2+eq_3*ts;
                
                delta1= Kpg_df*error_e+Kig_df*data.integral_delta_1;
                delta2=Kph_df*eq_3+Kih_df*data.integral_delta_2;
                
                v=Vn+0.0000001*delta1+0.000008*delta2;
                
                %Take care with this eq, w*t+int(dw)=?=(w+dw)*t
                t=t+ts; ph=wo*t+data.integral_w;if ph>(2*pi) t=((ph-2*pi)-data.integral_w)/wo; end;
                va=v*sin(ph); vb=-v*cos(ph);
                va=va+Lv*wo*ib; vb=vb-Lv*wo*ia;
                
                
                p=(3/2)*(va*ia+vb*ib);q=(3/2)*(-va*ib+vb*ia);
                V=sqrt(va^2+vb^2); f=(wo+dw)/(2*pi);
                
                
                %Filter active and reactive power signals
                P = (data.num(1)*p+data.num(2)*data.p-data.den(2)*data.P)/data.den(1);
                Q = (data.num(1)*q+data.num(2)*data.q-data.den(2)*data.Q)/data.den(1);
                
                %save state
                data.p=p; data.q=q; data.P=P; data.Q=Q; data.dw=dw;
                data.dV=dV; data.Vn=Vn; data.t=t; data.V=V; data.f=f;
                
                data.va=va;
                data.vb=vb;
                
                
                ttSendMsg([1 0],[a,data.f,data.V,Q,P,dw,dV,0,data.estimated_e],80);
                
                
        end
        
        %------------------
        %Primary control
        %------------------
        
        if ~strcmp(data.policy,{'DROOP_FREE','NO_COMM'})
            %Droop algorithm for all policies except droop-free
            mp=0;
            n=0;
            t=t+ts;
                      
            if gainK
                ph=(data.K(a)*wo+dw-m*P)*t-mp*P;if ph>(2*pi) t=((ph-2*pi)+mp*P)/(wo+dw-m*P); end;
            else
                ph=(wo+dw-m*P)*t-mp*P;if ph>(2*pi) t=((ph-2*pi)+mp*P)/(wo+dw-m*P); end;   
            end
            
            va=(Vn+dV-n*Q)*sin(ph); vb=-(Vn+dV-n*Q)*cos(ph);
            va=va+Lv*wo*ib; vb=vb-Lv*wo*ia;
            
            p=(3/2)*(va*ia+vb*ib);q=(3/2)*(-va*ib+vb*ia);
            V=sqrt(va^2+vb^2); f=(wo+dw-m*P)/(2*pi);
            
            %Filter active and reactive power signals
            P = (data.num(1)*p+data.num(2)*data.p-data.den(2)*data.P)/data.den(1);
            Q = (data.num(1)*q+data.num(2)*data.q-data.den(2)*data.Q)/data.den(1);
            
            %save state
            data.p=p; data.q=q; data.P=P; data.Q=Q; data.dw=dw;
            data.dV=dV; data.Vn=Vn; data.t=t; data.V=V; data.f=f;
            
            data.va=va;
            data.vb=vb;
        end
        exectime = data.ts/2;
        
    case 2
        ttAnalogOut(1, data.P); % Send message (80 bits) to node 1 (controller)
        ttAnalogOut(2, data.Q);
        ttAnalogOut(3, data.V);
        ttAnalogOut(4, data.f);
        ttAnalogOut(5, data.va);
        ttAnalogOut(6, data.vb);
        ttAnalogOut(7, data.t);
        exectime = -1;
end
