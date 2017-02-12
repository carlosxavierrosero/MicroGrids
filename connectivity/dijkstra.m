% dijkstra.m
% Function performs dijkstra's algorithm on the adjacency matrix A
% from the vertex numbered V. Assumes that for an NxN adjacency
% matrix there are vertices numbered 1-N. Returns V, the start
% vertex, the shortest distance SD where SD(i) is the shortest distance
% from V to vertex i. Also returns the labeled arcs in ARCS that
% constitute a shortest path arborescence rooted at vertex V.

function [V, SD, ARCS] = dijkstra(A,V)
N = length(A);
if V > N
    V = -1;
    SD = -1;
    ARCS = [-1 -1];
    return; %case of invalid Vertex number
end

ARCS = []; % store labeled arcs here

P=V
T = [1:(V-1) (V+1):N]

L=inf*ones(1,N);
L_prime = inf*ones(1,length(T));
L_prime_min_vertex = zeros(1,length(T));
L(V) = 0;
for i=1:length(T)
    if (A(V,T(i)) ~= 0)
        L_prime(i) = A(V,T(i)) % initialize distances from start vertex V
        L_prime_min_vertex(i) = V;
    end %if
end % for
start_min = 1; %
while length(P) < N
    %L_prime = L_prime % display
    [Y, I] = min(L_prime);
    [Z, I] = max(L_prime);
    if(Y==0) && (Z==0)
        return % no finite minimum paths in L_prime, stop
        
    else
        
        minimum = L_prime(1);
        index = 1;
        
        if (length(T) > 1)
            for i=2:length(T)
                if (L_prime(i) < minimum) && (L_prime(i) > 0)
                    minimum = L_prime(i)
                    index = i
                end %if
            end % for
        else
            % do nothing
        end
        
        P = [P, T(index)]; % add shortest path to T
        store_T = T(index);
        L(T(index)) = minimum; % label vertex
        store_length = minimum;
        ARCS = [ARCS; L_prime_min_vertex(index) T(index)]; % label arc
        
        T(index) = []; % remove from temporary
        L_prime(index) = [];
        L_prime_min_vertex(index)=[];
        
        if length(T) > 0
            for i=1:length(T)
                t1=L_prime(i);
                if A(store_T,T(i)) > 0
                    t2=store_length+A(store_T,T(i));
                else
                    t2 = inf; % no path
                end
                L_prime(i) = min([t1 t2]);
                
                if t2 < t1
                    L_prime_min_vertex(i) = store_T;
                end %if
            end % for
        end %if
    end % if
end

SD= L;
return


