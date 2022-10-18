// Made By JAGDAMBA TRIPATHI

#include <stdio.h>
int main(){
	int s1,s2,i,j,k,l=0,flag;
	printf("Enter The Number of Element in Set A: ");
	scanf("%d",&s1);
	int set1[s1];
	int set3[s1];
	for (i=0;i<s1;i++){
		printf("Enter the %d element of Set A :",i+1);
		scanf("%d",&set1[i]);
	}
	printf("Enter The Number of Element in Set B: ");
	scanf("%d",&s2);
	int set2[s2];
	for (i=0;i<s2;i++){
		printf("Enter the %d element of Set B :",i+1);
		scanf("%d",&set2[i]);
	}
	for (i=0;i<s1;i++){
		for (j=0;j<s2;j++){
			if (set1[i]==set2[j]){
			flag=1;
				for (k=0;k<l;k++){		
					if (set1[i]==set3[k]){
						flag=0;
						break;
					}
				}
				if (flag){
				set3[l]=set1[i];
				l++;
				}	
			}
		}	
	}
	printf("Intersection of A and B is :");
	for (i=0;i<l;i++){
		printf("%d ",set3[i]);
	}
}
