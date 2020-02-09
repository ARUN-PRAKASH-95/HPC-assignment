// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Dijkstra's Algorithm\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ //

#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

void main()

{
    //Assigning inputs
    int src=0;
    int v = 5;
    double matrix[5][5]={{-1,4,2,0,0},
                        {4,-1,3,2,3},
                        {2,1,-1,4,5},
                        {0,2,4,-1,1},
                        {0,3,5,1,-1}};
    double dist[v];
    dist[src]=0;
    for (int i=1; i<v;i++)
    {
        dist[i]=INT_MAX;
    }
    bool visit[v];
    for (int i=0; i<v;i++)
    {
        visit[i]=false;
    }

    //MAin Program
    for(int iv=0;iv<v;iv++)
    {
        int mini = INT_MAX;
        int u;
        for(int j=0;j<v;j++)
        {
            if(dist[j]<mini && visit[j]==false)
            {
                mini=dist[j];
                u=j;
            }
        }
        visit[u] = true;
        for(int k=0;k<v;k++)
        {
            if(matrix[u][k]>0 && visit[k]==false && dist[k]>(dist[u]+matrix[u][k]))
            {
                dist[k]=dist[u]+matrix[u][k];
            }
        }
    }

    for(int l=0;l<v;l++)
    {
        printf("%lf \n", dist[l]);
    }
    
}