#include<stdio.h>
int main(){

	int marks1, marks2, marks3;
	printf("Enter marks of 3 subjects:\n");
	scanf("%d%d%d", &marks1, &marks2, &marks3);
	if (((marks1+ marks2+ marks3)/3.0)>40){
		if (marks1>=33 && marks2>=33 && marks3>=33){
			printf("pass\n");
			return 0;
			// Ends the program with return 0 in main
		}
	}
	printf("Failed!!\n");
	return 0;
}
