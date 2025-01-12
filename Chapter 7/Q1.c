#include<stdio.h>
int main(){

	int something[]={10, 11, 12, 23, 34, 45, 56, 67, 88, 89};
	
	if(something[2]==*(something+2) && something[2]==12)
		printf("The third element using indexing and pointers are same\n");

	return 0;
}
