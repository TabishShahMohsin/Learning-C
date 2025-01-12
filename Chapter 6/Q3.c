#include<stdio.h>

void ten_times(int*n){
	*n=10*(*n);
}

int main(){

	int i;
	printf("Enter a number to make it 10 times: ");
	scanf("%d", &i);
	// Now you can understand why we were using '&' here all along
	
	ten_times(&i);
	printf("The vlaue of 10 times of the number is: %d\n", i);

	return 0;
}
