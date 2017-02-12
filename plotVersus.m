%% Plot_versus
close all

% firstSim = 'consensus16nodeBroadNoDrift';
% secondSim = 'consensus16nodeRingNoDrift';
firstSim = 'broadcastItself8';
secondSim = 'CustomOnebyOne8';


load(firstSim)
figure(1)
plot(t,f,'--', 'LineWidth', 2)

figure(2)
plot(t,P,'--', 'LineWidth', 2)

disp(firstSim);
error_w_ss = diff(f(end,:))
error_P_ss = diff(P(end,:))
%%%%%%%%%%%%%%%%%

load(secondSim)
figure(1)
hold on
plot(t,f,'LineWidth', 2)
%legend('f1 broad', 'f2 broad', 'f3 broad', 'f4 broad',...
%       'f5 broad', 'f6 broad', 'f7 broad', 'f8 broad',...
%       'f1 ring', 'f2 ring', 'f3 ring', 'f4 ring',...
%       'f5 ring', 'f6 ring', 'f7 ring', 'f8 ring'...
%       )
set(gca, 'FontSize', 20);
%title(['Strategy n. ' num2str(politik)]);
grid on;
ylabel('Frequency (Hz)');
xlabel('Time (s)');
ylim([49 50.5]); 
%ylim([40 47]);   

figure(2)
hold on
plot(t,P, 'LineWidth', 2)
%legend('P1 broad', 'P2 broad', 'P3 broad', 'P4 broad',...
%       'P5 broad', 'P6 broad', 'P7 broad', 'P8 broad',...
%       'P1 ring', 'P2 ring', 'P3 ring', 'P4 ring',...
%       'P5 ring', 'P6 ring', 'P7 ring', 'P8 ring')
set(gca, 'FontSize', 20);
%title(['Strategy n. ' num2str(politik)]);
grid on
ylabel('Active power (W)')
xlabel('Time (s)')
ylim([0 6*10^5]);

disp(secondSim);
error_w_ss = diff(f(end,:))
error_P_ss = diff(P(end,:))
%%%%
   