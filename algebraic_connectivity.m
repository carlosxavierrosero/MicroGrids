% algebraic_connectivity.m
% function returns the algebraic connectivity of the % adjacency matrix A
function AC = algebraic_connectivity(A)
EV = eig(degree(A) - A);
EV = sort(EV,'descend');
N = length(A);
eps = 0.01; % tolerance for 0
if (N >= 2) && (abs(EV(N)) < eps)
    AC = EV(N-1);
    return;
else
    AC = -1;
    return;
end % for
return;