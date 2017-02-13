%% test

clear all, close all, clc

X = [0;  0.707;  1;  0.707;  0; -0.707; -1; -0.707];
Y = [1;  0.707;  0; -0.707; -1; -0.707;  0;  0.707];

seq1 = [1 2; 2 3; 3 4; 4 5; 5 6; 6 7; 7 8; 8 1;
        1 3; 3 5; 5 7; 7 1;
        2 4; 4 6; 6 8; 8 2;
        1 5; 2 6; 3 7; 4 8;
        1 4; 2 5; 3 6; 4 7; 5 8; 6 1; 7 2; 8 3];

indexSeq1 = [1 8; 9 12; 13 16; 17 20; 21 28];
        
seq2 = [1 2; 2 3; 3 4; 4 5; 5 6; 6 7; 7 8; 8 1;
        1 4; 4 6; 6 1;
        2 5; 5 7; 7 2;
        3 6; 6 8; 8 3;
        4 7; 7 1; 1 4;    
        5 8; 8 2; 2 5;
        6 1; 1 3; 3 6;
        7 2; 2 4; 4 7;    
        8 3; 3 5; 5 8];

indexSeq2 = [1 8; 9 11; 12 14; 15 17; 18 20; 21 23; 24 26; 27 29; 30 32];
    
    
figure
ADJMAT = zeros(8);
 for i = 1:length(indexSeq1)
     [ADJMAT deg conn] = add_1by1SEQUEN(ADJMAT,seq1,indexSeq1(i,:));
     CON = connected_graph(ADJMAT)
     plot_adjacency(ADJMAT,X,Y)
     pause
 end