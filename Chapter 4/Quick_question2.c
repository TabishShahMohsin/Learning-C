#include<stdio.h>
int main(){

	int i=0;
	int n;
	printf("Eter number of natural numbers needed: ");
	scanf("%d", &n);


	do{
		printf("%d", ++i);
	}while(i<n);
	// Semi-colon needed after do-while loop


	return 0;
}
