% plot_arcs
% function plots arcs in ARCS given the X,Y location of the vertices
function plot_arcs(ARCS,X,Y)
axis([min(X)-1 max(X)+1 min(Y)-1 max(Y)+1])
hold on
for i=1:length(ARCS)
    plot([X(ARCS(i,1)) X(ARCS(i,2))],[Y(ARCS(i,1)) Y(ARCS(i,2))],'r')
end
return