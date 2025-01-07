#include<stdio.h>
int main(){
	int n;
	int i=0;
	
	printf("Enter natural number: ");
	scanf("%d", &n);


	for (;;){
		// May not write incrementation, initiation, or even the condition but 2 semi-colons are always required within the brackets.
		printf("%d\n", ++i);
		if (i==n)
			break;
	}
	return 0;
}
