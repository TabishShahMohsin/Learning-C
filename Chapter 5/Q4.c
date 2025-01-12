#include<stdio.h>

int fibonachi(int nth){
	// Try to dry run and explain the printed pattern.
	printf("%d,", nth);
	if(nth==1){
		printf("\n");
		return 0;
	}
	if(nth==2){
		printf("\n");
		return 1;
	}
	return fibonachi(nth-1)+fibonachi(nth-2);
}

int main(){

	int n;

	printf("Enter n for nth element for fibonachi: ");
	scanf("%d", &n);

	printf("The nth element of the fibonachi series is: %d\n", fibonachi(n));

	return 0;
}
