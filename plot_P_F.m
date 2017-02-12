h=figure; plot(t,P(:,1:end-1), 'LineWidth', 2); hold on
plot(t,P(:,end),'k', 'LineWidth', 2);
set(gca, 'FontSize', 24);
%title(['Strategy n. ' num2str(politik)]);
grid on
ylabel('Active power (W)')
xlabel('Time (s)')
ylim([0 6*10^5]);
%saveas(h,['../P_' file_name '.eps'])
h1=figure; plot(t,f(:,1:end-1), 'LineWidth', 2); hold on
plot(t,f(:,end),'k', 'LineWidth', 2);
set(gca, 'FontSize', 24);
%title(['Strategy n. ' num2str(politik)]);
grid on;
ylabel('Frequency (Hz)');
xlabel('Time (s)');
ylim([49 50.5]);
%ylim([40 47]);
