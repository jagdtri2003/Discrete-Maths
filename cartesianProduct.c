#include <stdio.h>

int main(){

	int i,j,s1,s2,k,x;
	printf("Enter the size of set A:");
	scanf("%d",&s1);
	int SetA[s1];
	printf("Enter the Elements of Set A: ");
	k=0;
	for (i=0;i<s1;i++){
		scanf("%d",&x);
		for (j=0;j<k;j++){
			
			if (SetA[j]==x)
				break;		
		}
		if (j==k){
			SetA[k]=x;
			k++;
		}
	}
	s1=k;
	printf("Enter the size of set B:");
	scanf("%d",&s2);
	int SetB[s2];
	printf("Enter the Elements of Set B: ");
	k=0;
	for (i=0;i<s2;i++){
		scanf("%d",&x);
		for (j=0;j<k;j++){
			
			if (SetB[j]==x)
				break;		
		}
		if (j==k){
			SetB[k]=x;
			k++;
		}
	}
	s2=k;
	printf("Cartesian Product of Set A and Set B is : { ");
	for (i=0;i<s1;i++){

		for (j=0;j<s2;j++){
			
			printf("( %d,%d ), ",SetA[i],SetB[j]);
	
		}

	}
	printf("\b } \n");


	return 0;
} 
