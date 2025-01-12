#include<stdio.h>
int main(){

	int sum=0;

	for(int i=0;i<11;i++)
		sum=sum+8*i;

	printf("The sum of the multiplication table of 8 is: %d\n", sum);

	return 0;
}
