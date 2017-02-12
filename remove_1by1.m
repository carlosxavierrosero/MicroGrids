%It generates an adjacency matrix of dimensions "(n x n)" with
%full connection, and removes a single edge at a time addressed by the
%"edge" parameter.

function [A deg conn] = remove_1by1(n,edge)
Top = (n/2)*(n-1); %maximum number of edges
A = zeros(n);

for i=1:n-1
    A(i,i+1:end) = 1;
end

if edge < n %first diagonal
    A(edge, edge+1) = 0;
elseif edge == n %edge between first and last node
    A(1, edge) = 0;
elseif (edge > n) && (edge<=Top)
    seed1 = 2;
    seed2 = 1;
    for i = 1:100
        if (edge >= (i*n+seed2)) && (edge < ((i+1)*n+seed2-seed1))
            a = edge-(i*n+seed2)+1;
            b = a+seed1;
            A(a, b) = 0;
            break
        end
        seed2 = seed2-seed1;
        seed1 = seed1 + 1;
    end
end
A = A|A'; %skew symmetric
deg = degree(A); %degree
conn = algebraic_connectivity(A); %connectivity
return
end