#include<stdio.h>
int main(){
	
	int i=0;
	int n;

	printf("Enter number for its table: ");
	scanf("%d", &n);


	for(;i<10;i++)
		printf("%d * %d = %d\n", n, i+1, n*(i+1));
	

	return 0;
}
