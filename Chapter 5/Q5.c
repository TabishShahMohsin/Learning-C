#include<stdio.h>
int main(){

	int a=3;
	printf("%d%d%d\n", a, ++a, a++);
	// It doesn't work in some compilers as the order in which these operations are evaluated is not specified in the C standard, meaning the compiler is free to evaluate them in any order. This leads to undefined behavior.
	return 0;
}
