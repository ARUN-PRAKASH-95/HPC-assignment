#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


/*Dijkstra's algorthim function declartion*/
// int *dijkstra( int source, int target, int m, int A[m][m]);

int main(void)
{
       
        int i,j,m,k,source,target;

        /*To get the number of nodes in the map*/
        printf("Enter number of nodes\n");
        scanf("%d", &m);
        

        int A[m][m];  /* Creates an array of dimension m*m  */
        
        srand(time(0));
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                
                if(i==j)
                {
                    A[i][j] = 0;
                    printf("\n");
                }
                
                else
                {
                    
                    /* For randomly creating distance values from each node to all other nodes*/
                    A[i][j] = A[j][i] = rand()%10;          
                    // printf("Enter the element A[%d][%d]",i,j);
                    // scanf("%lf",&A[i][j]);
                }
                
            }
        }


        printf("Random graph array\n");              
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter the source:");
        scanf("%d", &source);
        printf("\nEnter the target");
        scanf("%d", &target);
        

    

    double dist[m];
    int prev[m],row_no;
    double infi = INFINITY;


/*Assigns distance from start node to other nodes as infinity and zero to the start node*/
    for(i=0;i<m;i++)       
    {
        if(i==source)
        {
            dist[i] = 0;
        }
        else
        {
            dist[i]= infi;
        }
    }

    for(i=0;i<=1;i++)
    {
        if(i==1)
        {
            row_no = source;
        }
     
    }
    for(i=0;i<m;i++)
    {
        printf("%d\t",A[row_no][i]);
    } 
    
  
    
}