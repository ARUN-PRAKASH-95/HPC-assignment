#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;
    int A[5];
    srand(time(0)); 
  
    for(i=0; i<5; i++){ 
        A[i]=rand()%10;
    }    
           
    for(i=0; i<5; i++){ 
        printf("%d\t",A[i]);
    }  
}