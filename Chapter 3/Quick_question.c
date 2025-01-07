#include<stdio.h>
int main(){
	int marks;
	char grade;
	printf("Enter marks:");
	scanf("%d", &marks);

	if (marks>100 || marks<0){
		return 1;
		// Can return 1, meaning something went wrong wihtin the program however we shal not discuss how to catch that here. 
	}



	if (marks<=100 && marks>90){
		// We don't need to add less than conditionals after it as "elif" aren't checked iff elif or if above it isn't true.
		// Can use 'and' or 'or' to pile conditionals rather than using successive or nested ifs.
		grade='A';	
		// Can print here as well.
	}
		// No need to add semi-colons after blocks of code but adding so will not produce an error
	else if (marks>80){
		grade='B';
	}
		// Again, no need to add semi-colons after blocks of code
	else if(marks>70){
		grade='C';
	}
	else if(marks>60){
		grade='D';
	}
	else{
		grade='F';
	}
	printf("Grade: %c\n", grade);
	return 0;
}
