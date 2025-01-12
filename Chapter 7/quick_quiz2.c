#include<stdio.h>
int main(){

	int i[]={8, 3}, *j, k=1;
	printf("int i[]={8, 3}, *j, k=1;\n");
	j=&i[1];
	printf("*j=i[1];\n");

	printf("i: %p, j: %p, k: %d\n", i, j, k);
	printf("i+k: %p\n", k+i);
	printf("j-k: %p\n", j-k);
	printf("j-i: %ld\n", j-i);
	// The %p is for pointer and %ld is for long decimals
	
	if(i+k==j)
		printf("checking i+k==j: i+k is same as j\n");
		
	return 0;
}
