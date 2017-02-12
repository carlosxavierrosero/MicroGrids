% plotting

clear all, close all
load('consesus_com_all2all_4nodes_tr0_5_loss0.mat')

fall = f;
Pall = P;
time = t;

figure(1)
plot(time,fall,'r')

figure(2)
plot(time,Pall, 'r')

load('consesus_com_1by1Follow_4nodes_tr0_5_loss0.mat')

f1 = f;
P1 = P;

figure(1)
hold on
plot(time,f1,'b')

figure(2)
hold on
plot(time,P1,'b')


load('consesus_com_1by1Follow_8nodes_tr0_5_loss0.mat')

f18 = f;
P18 = P;

figure(1)
hold on
plot(time,f18,'c')

figure(2)
hold on
plot(time,P18,'c')





