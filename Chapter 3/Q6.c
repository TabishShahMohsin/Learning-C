#include<stdio.h>
int main(){

	int num1, num2, num3, num4, num_max;
	printf("Enter 4 numbers:\n");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	
	if (num1>=num2)
		num_max=num1;
	else
		num_max=num2;
	
	if (num_max<num3)
		num_max=num3;

	if (num_max<num4)
		num_max=num4;

	printf("The max number of the following is: %d\n", num_max);
	return 0;
}
