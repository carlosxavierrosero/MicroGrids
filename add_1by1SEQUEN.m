%It generates an adjacency matrix of dimensions "(n x n)" with
%no connection, and adds a single EDGE at a time addressed by the
%"edge" parameter.

function [A deg conn] = add_1by1SEQUEN(Ainit,seq,index)

A = zeros(length(Ainit));

for i = index(1):index(2)
    a = seq(i,:);
    A(a(1),a(2)) = 1; 
end

A = A|A'; %skew symmetric
A = Ainit|A;

deg = degree(A); %degree
conn = algebraic_connectivity(A); %connectivity
return
end