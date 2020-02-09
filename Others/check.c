#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main(void){
    int m = 10;
    int source = 4;
    int dist[m],prev[m],i;
    double a = INFINITY;

    for(i=0;i<m;i++){
        if(i==source){
            dist[i] = 0;
        }
        else{
            dist[i]= a;
        }
    }
    for(i=0;i<m;i++){
        printf("%d\t",dist[i]);
    }

    
}