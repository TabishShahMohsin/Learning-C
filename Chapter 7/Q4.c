#include<stdio.h>

int main(){

	int table_of_n[10], n;
	printf("Enter a number to get its multiplicative table: ");
	scanf("%d", &n);

	for(int i=0;i<10;i++)
		table_of_n[i]=n*(i+1);
	
	for(int i=0; i<10; i++)
		printf("5 * %d = %d\n", i+1, table_of_n[i]);
	
	return 0;
}
