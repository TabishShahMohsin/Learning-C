#include<stdio.h>
int main(){
	int number;
	printf("Enter no: ");
	scanf("%d", &number);
	printf("The no is divisible by 97 (0 means divisible): %d\n", number%97);

	return 0;
}
