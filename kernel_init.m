function kernel_init(arg)
global ts wo m n mp numPQ denPQ Vn Lv politik_matrix kpf kif num_generators b c Kpg_df Kig_df Kph_df Kih_df Ad
global kernel_drift kernel_offset IC_INTEGRAL alfa kernel_start tr
global af bf connections

a=arg(1);
%Persistent variables
   data.num=numPQ;
   data.den=denPQ;
   data.connections=connections;
   data.cont=0;
   data.a=a;
   data.ts=ts;
   data.wo=wo;
   data.P=0;
   data.Q=0;
   data.dw=0;
   data.dV=0;
   data.Vn=Vn;
   data.V=0;
   data.m=m;
   data.n=n;
   data.mp=mp;
   data.Lv=Lv;
   data.ts=ts;
   data.t=0;
   data.va=0;
   data.vb=0;
   data.p=0;
   data.q=0;
   data.f=wo/(2*pi);
   data.ferror=0;
   data.kif=kif;
   data.kpf=kpf;
   data.integral=0;
   data.policy=politik_matrix{a};
   data.dataf=zeros(1,num_generators);
   data.datav=zeros(1,num_generators);
   data.dataq=zeros(1,num_generators);
   data.datadw=zeros(1,num_generators);
   data.datap=zeros(1,num_generators);
   data.data_estimated_e=zeros(1,num_generators);
   data.c=c;
   data.b=b;
   data.Kpg_df=Kpg_df; 
   data.Kig_df=Kig_df;
   data.Kph_df=Kph_df; 
   data.Kih_df=Kih_df;
   data.Ad=Ad;
   data.estimated_e=Vn;
   data.integral_8=0;
   data.integral_delta_1=0;
   data.integral_delta_2=0;
   data.integral_w=0;
   
   %%%
   %%filter
   
   data.K = ones(1,num_generators);
   data.e = zeros(1,num_generators);
   data.af = af;
   data.bf = bf;
   %%%
   
   data.mdrift=kernel_drift(a);
   data.moffset=kernel_offset(a);
   data.IC_INTEGRAL=IC_INTEGRAL(a);
   data.start=kernel_start(a);
   
   data.num_generators=num_generators;
   data.alfa=alfa;
   data.tr=tr;

   %create the task
   ttInitKernel('prioEDF');
%    ttCreatePeriodicTask('dintegral_w_task', 0, 100e-6, 'processor',data);
   ttCreatePeriodicTask('dintegral_w_task', 0, ts, 'processor',data);
end