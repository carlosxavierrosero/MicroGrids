%It generates an adjacency matrix of dimensions "(n x n)" with
%no connection, and adds a single EDGE at a time addressed by the
%"edge" parameter.

function [A deg conn] = add_1by1(n,edge)
Top = (n/2)*(n-1); %maximum number of edges

A = zeros(n);

for EDGE = 1:edge
    if EDGE < n %first diagonal
        A(EDGE, EDGE+1) = 1;
    elseif EDGE == n %EDGE between first and last node
        A(1, EDGE) = 1;
    elseif (EDGE > n) && (EDGE<=Top)
        seed1 = 2;
        seed2 = 1;
        for i = 1:100
            if (EDGE >= (i*n+seed2)) && (EDGE < ((i+1)*n+seed2-seed1))
                a = EDGE-(i*n+seed2)+1;
                b = a+seed1;
                A(a, b) = 1;
                break
            end
            seed2 = seed2-seed1;
            seed1 = seed1 + 1;
        end
    end
end
A = A|A'; %skew symmetric
deg = degree(A); %degree
conn = algebraic_connectivity(A); %connectivity
return
end