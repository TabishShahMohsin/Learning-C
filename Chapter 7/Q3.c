#include<stdio.h>

int main(){

	int table_of_5[10];

	for(int i=0;i<10;i++)
		table_of_5[i]=5*(i+1);
	
	for(int i=0; i<10; i++)
		printf("5 * %d = %d\n", i+1, table_of_5[i]);
	
	return 0;
}
