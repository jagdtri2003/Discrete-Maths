//Made By Jagdamba Tripathi 
#include <stdio.h>

int main(){

	int n1,i,j,Psize=1;
	printf("Enter the number of element in Set A : ");
	scanf("%d",&n1);
	
	//Calculating The Size Of Power Set 

	for (i=0;i<n1;i++){
		Psize*=2;
	}
	int A[n1],P[Psize];
	for(i=0;i<n1;i++){
		printf("Enter the element %d of Set A : ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("Power Set of A is : { ");

	for (i=0;i<Psize;i++){
		printf("{ ");
		for (j=0;j<n1;j++){
		
			if (i & (1<<j)){
				printf("%d,",A[j]);
			}		
		}
		printf("\b },");

	}
	printf("\b }\n");

	return 0;
}
