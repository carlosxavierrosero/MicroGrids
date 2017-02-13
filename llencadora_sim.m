clc; clear all; close all;
global ts
global wo
global m
global n
global mp kif kpf
global numPQ denPQ Vn Lv
global politik_matrix
global num_generators
global b c Kpg_df Kig_df Kph_df Kih_df Ad
global kernel_drift kernel_offset
global IC_INTEGRAL
global alfa
global kernel_start
global firstNode
global lastNode
global messaging
global tr
global af bf gainK

%politik='DROOP_FREE'
%politik='CENTRAL'
%politik='AVERAGING'
%politik='DISTRIBUTED1'
%politik='DISTRIBUTED2'
politik='CONSENSUS'
%politik='NO_COMM'
%politik='ORGASMUS'

politik_matrix={politik politik politik politik politik politik politik politik...
    politik politik politik politik politik politik politik politik...
    politik politik politik politik politik politik politik politik...
    politik politik politik politik politik politik politik politik};

ts = 100e-6;
data_rate = 0.1; %time at which the messages are sent
%%-----politik Legend--------------
% Sencondaryless= 1;
% Central_Integral= 2;
% Distributed_Integral= 3;
% Warrior= 4;
% Consensus= 5;
% Distributed_integral_w=6;
%%----------------------------------
%tr=.5; %Limit inferior 0.7e-3 tolerable si 100 Mb/s i 84B amb 32 nodes
global connections
nodes = 8

%tstop=10;
tstop=30;
NumTests = 28 %number of simulations
model = 'nodes8.mdl';

firstNode = 1; %first address
lastNode = nodes; %last address

%messaging = 'broadcast'
messaging = 'customized'

%%%%%
%filter
%gainK = 1; %enable
gainK = 0; %disable
af = 1.0e-5;
bf = -1.0;
%%%%

tr=0.5; %transmission rate
loss=0;

mpm=zeros(1,32);
Lvm=zeros(1,32);
mpm(4)=1*0.5e-6 ;mpm(8)=1*0.5e-6;mpm(16)=0.5*0.5e-6;mpm(32)=0.25*0.5e-6;
Lvm(4)=1*12.8e-6 ;Lvm(8)=1*12.8e-6;Lvm(16)=0.5*12.8e-6;Lvm(32)=0.25*12.8e-6;

b=2;
c=0.000001;
Kpg_df=0.01;
Kig_df=3;
Kph_df=0.005;
Kih_df=2;
alfa=.5;

%politik=2; nodes=8; loss=0; tr=2;
%file_name=['Pau_Pol_' num2str(politik) '_Nodes_' num2str(nodes) '_Perd_' num2str(loss) '_TxRate_' num2str(tr) ];
%display(file_name)
model=['nodes' num2str(nodes)];
KSencondaryless= (politik==1);
KCentral_Integral= (politik==2);
KDistributed_Integral= (politik==3);
KWarrior= (politik==4);
KDegenerated= (politik==5);
KDistributed_Integral_w= (politik==6);
tot=nodes;

Ad=ones(tot,tot);

Vn=230*sqrt(2); fo=50; wo=2*pi*fo; num_generators=tot; num_loads=tot; num_lines=tot; num_loads_act=1;

kernel_offset=zeros(1,num_generators);

%kernel_drift=[50e-6 0 20e-6 -30e-6]*0;
kernel_drift=rand(1,num_generators)*0;%*0.1-0.05;

%kernel_start=[0 0 0 tstop/2];
kernel_start=zeros(1,num_generators);

minRline=1.3e-3; maxRline=8.8e-3; minLline=maxRline/(tand(70)*wo); maxLline=minRline/(tand(20)*wo);
minRL=0.21; maxRL=0.45; minLL=0.47e-3; maxLL=1e-3;
tL=1e10*ones(1,num_loads_act); %Temps en el que les carregues es desconecten
tL(1)=2.1*tstop/2;
rand('seed',2);
Rline=minRline+(maxRline-minRline)*rand(1,num_lines);
rand('seed',3);
Lline=minLline+(maxLline-minLline)*rand(1,num_lines);
rand('seed',5);
RL=minRL+(maxRL-minRL)*rand(1,num_loads);
rand('seed',7);
LL=minLL+(maxLL-minLL)*rand(1,num_loads);
RLa_pre=minRL*ones(1,num_loads_act)*4/tot*2;
RLa_pos=maxRL*ones(1,num_loads_act)*4/tot;
rand('seed',11); %11    4-17
transmission_phase=round(1000*tr*rand(1,num_generators))/1000;
m=10e-6; n=100e-6; mp=mpm(nodes); Lv=Lvm(nodes);
num=[0.02*wo]; den=[1 0.02*wo]; sysd=c2d(tf(num,den),ts,'tustin'); [numPQ,denPQ]=tfdata(sysd,'v');
kpf=0.5*0.1; kif=2*0.5*1.2; kpV=0*0.5*0.1; kiV=0*0.5*0.8; kpQ=0*10e-6; kiQ=0*80e-6; % ganancias PI del control secundario
%ic=round(1000*tr*rand(1,num_generators))/10
%rand('seed',15);
%ic=0*[1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1]*wo/(2*pi);
%ic=round(1000*tr*rand(1,num_generators))/100+round(1000*tr*rand(1,num_generators))/10
ic = zeros(1,num_generators);

%dr=[10*2e-6 0 0 0];
dr=zeros(1,num_generators);

%sim(model);
IC_INTEGRAL=ic;

connectivity = [];
diffPot = [];
FREQ = [];
POW = [];
AdjMatrix = [];
load_system(model);

% for i=1:NumTests
%     fprintf('Simulation %d of %d\n',i,NumTests)
%     %[connections deg conn] = fillRandomOnes(nodes,-0.25);
%     [connections deg conn] = remove_1by1(nodes,i);
%     %[connections deg conn] = add_1by1(nodes,i);
%     connectivity = [connectivity conn];
%     AdjMatrix = [AdjMatrix connections];
%     sim(model);
%     diffPot = [diffPot max(P(end,:))-min(P(end,:))];
%     FREQ = [FREQ f];
%     POW = [POW P];
% end

seq1 = [1 2; 2 3; 3 4; 4 5; 5 6; 6 7; 7 8; 8 1;
        1 3; 3 5; 5 7; 7 1;
        2 4; 4 6; 6 8; 8 2;
        1 5; 2 6; 3 7; 4 8;
        1 4; 2 5; 3 6; 4 7; 5 8; 6 1; 7 2; 8 3];
indexSeq1 = [1 8; 9 12; 13 16; 17 20; 21 28];
        
seq2 = [1 2; 2 3; 3 4; 4 5; 5 6; 6 7; 7 8; 8 1;
        1 4; 4 6; 6 1;
        2 5; 5 7; 7 2;
        3 6; 6 8; 8 3;
        4 7; 7 1; 1 4;    
        5 8; 8 2; 2 5;
        6 1; 1 3; 3 6;
        7 2; 2 4; 4 7;    
        8 3; 3 5; 5 8];
indexSeq2 = [1 8; 9 11; 12 14; 15 17; 18 20; 21 23; 24 26; 27 29; 30 32];
% new index (3) with the same sequency 2
indexSeq3 = [9 11; 12 14; 15 17; 18 20; 21 23; 24 26; 27 29; 30 32; 1 8];    
connections = zeros(nodes);
 for i = 1:length(indexSeq3)
    fprintf('Simulation %d of %d\n',i,length(indexSeq3))
    [connections deg conn] = add_1by1SEQUEN(connections,seq2,indexSeq3(i,:));
    connectivity = [connectivity conn];
    sim(model);
    diffPot = [diffPot max(P(end,:))-min(P(end,:))];
    FREQ = [FREQ f];
    POW = [POW P];
end

scatter(connectivity, diffPot)
%save('8nodesConsensusSymmetricNormal_addSEQ1_30secFREQPOW')
%save('8nodesConsensusSymmetricNormal_addSEQ2_30secFREQPOW')
save('8nodesConsensusSymmetricNormal_addSEQ3_30secFREQPOW')