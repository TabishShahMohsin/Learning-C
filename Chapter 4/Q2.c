#include<stdio.h>
int main(){
	
	int i=0;
	int n;

	printf("Enter number for its table: ");
	scanf("%d", &n);


	for(;i<10;i++)
		printf("%d * %d = %d\n", n, 10-i, n*(10-i));
	

	return 0;
}
