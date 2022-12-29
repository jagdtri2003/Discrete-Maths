#include <stdio.h>
#define inf 999


int main(){

	int i,j,vc,val,count=0,min,minCost=0,a,b;
	printf("Enter the number of vertices: ");
	scanf("%d",&vc);
	int adj[vc][vc];
	int found[vc];

	for (int i=0;i<vc;i++)
		found[i]=-1;

	for (i=0;i<vc;i++){
		for (j=0;j<vc;j++)

			if (i==j)
				adj[i][i]=inf;
			else
				adj[i][j]=-1;
	}
	
	for (i=0;i<vc;i++){
		for (j=0;j<vc;j++){
			if (adj[i][j]==-1){
				printf("Enter the Cost of %d to %d : ",i,j);
				scanf("%d",&val);
				if (val==0){
					adj[i][j]=inf;
					adj[j][i]=inf;
				}
				else{
					adj[i][j]=val;
					adj[j][i]=val;
				}
			}
		}
	
	}

	while(count<vc-1){

		for (i=0,min=inf;i<vc;i++){
			for (j=0;j<vc;j++){
				
				if (adj[i][j]<min){
					min=adj[i][j];
					a=i;
					b=j;
				}
		
			}
				
		}
		adj[a][b]=inf;
		adj[b][a]=inf;
		
		if (found[a] == -1 || found[b]==-1){
			count++;
			minCost+=min;
			if (found[a]==-1){
				found[a]=1;
				found[b]=1;
				printf("%d to %d  : Cost %d \n",a,b,min);
				
			}
			else if (found[b]==-1){
				found[a]=1;
				found[b]=1;
				printf("%d to %d  : Cost %d \n",a,b,min);
			}
		}
			
	}

	printf("Minimum Cost is : %d ",minCost);
	

	return 0;
}
