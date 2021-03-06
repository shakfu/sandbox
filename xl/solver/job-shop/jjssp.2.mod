

param n, integer, > 0;
param m, integer, > 0;

set JOB := 1..n;
set MACHINE := 1..m;

param sigma{j in JOB, t in 1..m}, in MACHINE;

check{j in JOB, t1 in 1..m, t2 in 1..m: t1 <> t2}:
      sigma[j,t1] != sigma[j,t2];

param processing_time{j in JOB, a in MACHINE}, >= 0;

var starting_time{j in JOB, a in MACHINE}, >= 0;

s.t. ord{j in JOB, t in 2..m}:
    starting_time[j, sigma[j,t]] >= starting_time[j, sigma[j,t-1]] 
    + processing_time[j, sigma[j,t-1]];


var SCHEDULE{i in JOB, j in JOB, a in MACHINE}, binary;

param K := sum{j in JOB, a in MACHINE} processing_time[j,a];

display K;

s.t. phi{i in JOB, j in JOB, a in MACHINE: i <> j}:
      starting_time[i,a] >= starting_time[j,a] 
      + processing_time[j,a] 
      - K * SCHEDULE[i,j,a];


s.t. psi{i in JOB, j in JOB, a in MACHINE: i <> j}:
      starting_time[j,a] >= starting_time[i,a] 
      + processing_time[i,a] 
      - K * (1 - SCHEDULE[i,j,a]);


var makespan;

s.t. fin{j in JOB}: 
    makespan >= starting_time[j, sigma[j,m]] 
    + processing_time[j, sigma[j,m]];


minimize obj: makespan;

data;

# The optimal solution is 55 

param n := 6;

param m := 6;

param sigma :  1  2  3  4  5  6 :=
          1    3  1  2  4  6  5
          2    2  3  5  6  1  4
          3    3  4  6  1  2  5
          4    2  1  3  4  5  6
          5    3  2  5  6  1  4
          6    2  4  6  1  5  3 ;

param processing_time     
            :  1  2  3  4  5  6 :=
          1    3  6  1  7  6  3
          2   10  8  5  4 10 10
          3    9  1  5  4  7  8
          4    5  5  5  3  8  9
          5    3  3  9  1  5  4
          6   10  3  1  3  4  9 ;




end;

