#include<stdio.h>

int sum(int n);

int main(){

	int num;
	printf("Enter number: ");
	scanf("%d", &num);

	printf("The sum of %d natural numbers is: %d\n", num, sum(num));

	return 0;
}

int sum(int n){
	if(n==1)
		return 1;
	return sum(n-1)+n;
}
