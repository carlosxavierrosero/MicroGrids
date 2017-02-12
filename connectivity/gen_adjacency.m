% gen_adjacency.m
% generates adjacency matrix for a set of vertices with
% locations [X,Y] that have a communication range of R

function [A] = gen_adjacency(X,Y,R)
N = length(X);
A = zeros(N,N);
for i=1:N,
    for j=1:N
        distance = sqrt( (X(i)-X(j))^2 + (Y(i)-Y(j))^2 );
        if (distance <= R) && (i~=j)
            A(i,j) = 1;
            A(j,i) = 1;
        end
    end
end
return