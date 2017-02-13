% plot adjacency.m
% function plots the edges of the adjacency matrix A
function plot_adjacency(A,X,Y)
clf;
N = length(A);
ARCS = [];
for i=1:N,
    for j=1:N,
        if A(i,j) ~= 0
            ARCS = [ARCS; i j];
        end % if
    end % for
end % for

axis([min(X)-1 max(X)+1 min(Y)-1 max(Y)+1])
hold on
for i=1:length(ARCS)
    plot([X(ARCS(i,1)) X(ARCS(i,2))],[Y(ARCS(i,1)) Y(ARCS(i,2))],'r')
end

plot(X,Y,'*');
a = (1:length(A))';
b = num2str(a);
c = cellstr(b);
text(X+0.05, Y+0.05, c, 'fontsize',12);

xlabel('X-Dimension');
ylabel('Y-Dimension');
axis square
return