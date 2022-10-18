#include <stdio.h>

int main(){
	int s1,s2,i,j,l,k=0;
	printf("Enter the size of Set1 and Set2 :");
	scanf("%d %d",&s1,&s2);
	int set1[s1],set2[s2],set3[s1];
	for (i=0;i<s1;i++){
		printf("Enter the %d element for Set 1 : ",i+1);
		scanf("%d",&set1[i]);
	}
	for (i=0;i<s2;i++){
		printf("Enter the %d element for Set 2 : ",i+1);
		scanf("%d",&set2[i]);
	}
    for( i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            if(set2[j]==set1[i])
             break;
        }
        if(j==s2){    
            for(l=0;l<k;l++){
                if(set3[l]==set1[i])
                 break;
            }
            if(l==k){
                set3[k]=set1[i];
                k++;
            }
        }   
    }
	printf("Difference of A and B is :");
	for (i=0;i<k;i++){
		printf("%d ",set3[i]);
	}
	
	return 0;
}

