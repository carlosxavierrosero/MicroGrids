function [A deg conn] = fillRandomOnes(n,offset)

A = zeros(n);
for i=1:n-1
    A(i,i+1:end) = round(rand(1,n-i)+offset);    
end

A = A|A'; %skew symmetric
deg = degree(A); %degree
conn = algebraic_connectivity(A); %connectivity
return
end