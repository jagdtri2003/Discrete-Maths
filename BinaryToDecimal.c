//ONLY FUNCTIONS ARE GIVEN HERE 

#include <stdio.h>

int decToBin(int);
int rev(int);

int main(){
  
  printf("Binary of 13 is : %d",decToBin(13));

	return 0;
}

int rev(int x){

	int res=0;
	while(x!=0){
		res=res*10+x%10;
		x/=10;
	}
	return res;	

}

int decToBin(int x){

	int res=0;
	while(x!=0){
		res=res*10+x%2;
		x/=2;
	}
	return rev(res);
}
