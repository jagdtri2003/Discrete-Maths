#include <stdio.h>

int main(){

	
	int i,j,x,A,B;
	printf("Truth Table of AND : \n");
	printf("A\tB\tA and B\n");
	for (i=0;i<2;i++){

		for (j=0;j<2;j++){

			printf("%d\t%d\t %d\n",i,j,i&&j);
		}
	}
	printf("Truth Table of OR : \n");
	printf("A\tB\tA or B\n");
	for (i=0;i<2;i++){

		for (j=0;j<2;j++){

			printf("%d\t%d\t %d\n",i,j,i||j);
		}
	}
	printf("Truth Table of NOT : \n");
	printf("A\tA NOT\n");
	for (i=0;i<2;i++){

		printf("%d\t%d\n",i,!i);
	}

	return 0;
}
