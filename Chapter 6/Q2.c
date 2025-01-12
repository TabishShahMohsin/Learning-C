#include<stdio.h>

void print_add(int *a){
	printf("Priting address within a function by referance: %p\n", a);
} // Can't even use single lined statements in fucntions without brackets.
// Can define fucntion before main.
// But should get either prototype or definition before main, so that the compiler knows it.


void print_add2(int a){
	printf("Priting address within a function by value: %p\n", &a);
}


int main(){

	int i;
	printf("&i: %p\n", &i);
	print_add(&i);
	print_add2(i);

	return 0;
}
