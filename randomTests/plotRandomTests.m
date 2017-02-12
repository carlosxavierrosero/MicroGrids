%% plotRandomTests
close all

Sim = '8nodesConsensusSymmetricNormal_add1by1_28sim30secFREQPOW.mat';

load(Sim)
disp(Sim);
% figure(1)
% plot(t,f,'--', 'LineWidth', 2)
% figure(2)
% plot(t,P,'--', 'LineWidth', 2)

%% plotting maximum power difference as function of algebraic connectivity

scatter(connectivity, diffPot)
%set(gca,'yscale','log','xscale','log')
set(gca,'yscale','log') %use logarithmic scale
xlabel('Algebraic connectivity','fontsize',20);
ylabel('Maximum power error','fontsize',20);
a = (1:size(connectivity,2))'; b = num2str(a); c = cellstr(b);
dx = 0.000; dy = 0.000; % displacement so the text does not overlay the data points
text(connectivity+dx, diffPot+dy, c, 'fontsize',12);

%% plotting network graphs of certain experiments only, described by 'samples'

samples = [7:15]; %insert the sample number to be analized
nodes = size(AdjMatrix,1)
% node coordinates in plane
X = [0;  0.707;  1;  0.707;  0; -0.707; -1; -0.707];
Y = [1;  0.707;  0; -0.707; -1; -0.707;  0;  0.707];

for i=1:length(samples)
    N = (samples(i)-1)*nodes + 1;
    ADJMAT = AdjMatrix(:,N:(N+nodes-1))
    CON = connected_graph(ADJMAT)
    figure
    plot_adjacency(ADJMAT,X,Y)
    title(['Test # ' num2str(samples(i))])
end

%% removing experiments without edge connectivity

newConnectivity = [];
newDiffPot = [];
%    AdjMatrix = [AdjMatrix connections];
new_a = [];
for i = 1:size(connectivity,2)
    N = (i-1)*nodes + 1;
    ADJMAT = AdjMatrix(:,N:(N+nodes-1));
    CON = connected_graph(ADJMAT);
    if CON == 1
        newConnectivity = [newConnectivity connectivity(i)];
        new_a = [new_a; i];
        newDiffPot = [newDiffPot diffPot(i)];
    end
    disp(i)  
end

%% plotting new data set considering all experiments that have edge connectivity
figure
%scatter(newConnectivity, newDiffPot)
plot(newConnectivity, newDiffPot,'-o')
set(gca,'yscale','log','xscale','log')
%set(gca,'yscale','log') %use logarithmic scale
xlabel('Algebraic connectivity','fontsize',20);
ylabel('Maximum power error','fontsize',20);
b = num2str(new_a); c = cellstr(b);
dx = 0.000; dy = 0.000; % displacement so the text does not overlay the data points
text(newConnectivity+dx, newDiffPot+dy, c, 'fontsize',12);
