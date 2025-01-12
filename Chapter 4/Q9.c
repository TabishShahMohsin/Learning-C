#include<stdio.h>
int main(){

	int i=1, factorial=1, n;
	
	printf("Enter number for factorial: ");
	scanf("%d", &n);


	if (n==0)
		factorial=1;
	else{
		while(i<=n){
			factorial=factorial*i;
			i++;}
	}	

	printf("The factorial of %d is: %d\n", n, factorial);

	return 0;
}
