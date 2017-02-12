% gen_mesh.m
% The function mesh.h returns the X,Y locations of an
% m by n mesh with unit spacing of 1
function [X,Y] = gen_mesh(m,n)
X = [];
Y = [];
for i=1:m % number of rows
    for j=1:n % number of columns
        X = [X; j-1];
        Y = [Y; i-1];
    end
end
return;