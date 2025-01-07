#include<stdio.h>
int main(){

	int a=10;
	if((a=11))
		// Using result of an assignment as a condition will be true, if assignment took place.
		// Should have use == for checking
		printf("I am 11\n");
		// Can use single lined statements without {}
		// If used >1 statements without '{}', the statements after the 1st one will be considered outside the block
	else
		printf("I am not 11\n");

	return 0;
}
