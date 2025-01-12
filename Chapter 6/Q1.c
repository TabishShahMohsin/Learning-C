#include<stdio.h>
int main(){

	int i=8;
	printf("&i: %p\n", &i);
	printf("*(&i): %d\n", *(&i));

	return 0;
}
