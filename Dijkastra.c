#include <stdio.h>

#define infinity 9999
#define max 10

void dijkstra(int adj[max][max],int n,int start);

int main(){
    int adj[max][max],i,j,n,u;
    printf("Enter no. of vertices : ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix : ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&adj[i][j]);
        }
    }
    printf("\nEnter the starting node : ");
    scanf("%d",&u);
    dijkstra(adj,n,u);

    return 0;
}

void dijkstra(int adj[max][max],int n,int start){
    
    int cost[max][max],distance[max],pred[max];
    int visited[max],count,minDistance,nextNode,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (adj[i][j]==0)
                cost[i][j]=infinity;
            else    
                cost[i][j]=adj[i][j];
        }
    }
    for (i=0;i<n;i++){
        distance[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }
    distance[start]=0;
    visited[start]=1;
    count=1;
    while(count<n-1){
        minDistance=infinity;
        for (i=0;i<n;i++){
            if (distance[i]<minDistance && !visited[i]){
                minDistance=distance[i];
                nextNode=i;
            }
        }
        visited[nextNode]=1;
        for(i=0;i<n;i++){
            if(!visited[i]){
                if (minDistance+cost[nextNode][i]<distance[i]){
                    distance[i]=minDistance+cost[nextNode][i];
                    pred[i]=nextNode;
                }
            }
        }
        count++;
    }
    for (i=0;i<n;i++){
        if (i!=start){
            printf("\nDistance of node %d=%d",i,distance[i]);
            printf("\nPath=%d",i);
            j=i;
            do{
                j=pred[i];
                printf("<-%d",j);
            }while(j!=start);
        }
    }
}