// Made By Jagdamba Tripathi 

// Symmetric Difference of Two Sets 

// A ^ B =(A - B) U (B - A) 

#include<stdio.h>

int main()
{
	int n1,n2,i,j,l,k=0;
	printf("Enter The Number of Element in Set A: ");
	scanf("%d",&n1);
	int a[n1],c[n1];
	for (i=0;i<n1;i++){
		printf("Enter the %d element of Set A :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter The Number of Element in Set B: ");
	scanf("%d",&n2);
	int b[n2];
	for (i=0;i<n2;i++){
		printf("Enter the %d element of Set B :",i+1);
		scanf("%d",&b[i]);
	}

    //      A-B    
    for( i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(b[j]==a[i])
                break;
        }
        if(j==n2){
            for(l=0;l<k;l++){
                if(c[l]==a[i])
                    break;
            }
            if(l==k){
                c[k]=a[i];
                k++;
            }
        }     
    } 

    //          B-A
    for( i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(b[i]==a[j])
             break;
        }
        if(j==n1){
            for(l=0;l<k;l++){
                if(c[l]==b[i])
                    break;
            }
            if(l==k){
                c[k]=b[i];
                k++;
            }
        }   
    }
    
    printf("\nSymmetric Difference of set A and B is : ");
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
        
    return 0;
    
}