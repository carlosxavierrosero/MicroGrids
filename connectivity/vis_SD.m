% vis_SD.m
% helps visualize the number of hops required to reach % any node in the network from vertex V
function vis_SD(V,SD,X,Y)
if length(SD) ~= length(X)
    return
end

clf;
axis([min(X)-1 max(X)+1 min(Y)-1 max(Y)+1]);
for i=1:length(SD)
    s = sprintf('%i', SD(i));
    text(X(i),Y(i),s);
    hold on;
end % for
xlabel('X-Axis')
ylabel('Y-Axis')
s = sprintf('Shortest Path from Node %i in Hops', V);
title(s);
return