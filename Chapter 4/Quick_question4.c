#include<stdio.h>
int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(;n>0;n--)
		printf("%d\n", n);

	return 0;
}
