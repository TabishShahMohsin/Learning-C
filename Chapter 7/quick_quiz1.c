#include<stdio.h>
int main(){

	int marks[5];

	for(int i=0; i<5;i++){
		printf("Enter marks of student %d: ", i+1);
		scanf("%d", marks+i);
		// +i will automaticaly shift i pointers ahead, even if it is for 4 or 8 bytes.
	}
	int i;
	// if variable is defined under for it will be needed to redefine it, if used again. The scope of such a variable is limited.
	for (i=0; i<5; i++){
		printf("Marks of student %d is: %d.\n", i+1, *(marks+i));
	}	
	return 0;
}
