#include<stdio.h>
int main(){


	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	//getchar();

	char array_of_variable_size[n];
	
	printf("Using scanf for characters without spaces lets:\n");
	for(int i=0;i<n;i++){
		scanf("%c", i+array_of_variable_size);
	}

	printf("Using scanf for characters with spaces lets:\n");
	// Newline is also a character.
	for(int i=0;i<n;i++){
		scanf(" %c ", i+array_of_variable_size);
	}

	return 0;
}
