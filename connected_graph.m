%connected_graph.m
%checks the adjacency matrix
%to verify that the graph is connected.
%Uses a Depth-First Search Algorithm (DFS) to determine if every node is
% reachable from node 1. Function returns 1 if the graph is connected
function [C] = connected_graph(A)
N = length(A);
visited = zeros(1,N); % stores whether the node has been visited (1 == visited)
DFS = zeros(1,N); % store DFS number
DFS_number = 0; % stores the last number assigned
[DFS_number, DFS, visited] = search_graph(1, DFS_number, DFS, visited, A);
if (sum(visited) == N)
    C = 1;
    disp('Graph is connected');
else
    C = 0;
    disp('Sorry, graph is not connected!');
end %if
return;