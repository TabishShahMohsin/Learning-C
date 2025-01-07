#include<stdio.h>
// This is pre-processing directory that includes the functions (like printf()), keywords (like int), etc.
int main(){
	// int tells that this function returns integer type.
	// main is the name of the function, which is by default the "main"/"primary"/"the function to go through" by default at first. You can get a better idea of this after understanding custom functions later.

	int a=3, b=4;
	// Gets 3 in a and 4 in b.
	// We always need to define the types of the variables while defining them in languages like C.
	// Yes we can define many integers within a single line. And even better a=b=3 if needed.
	printf("The area of the rectangle is: %d \n", a*b);
	// printf prints it to the screen, things like printing are called as side-effects more of that later.
	// Should add \n for return (character entered using "enter or return key") otherwise one could notice some weird characters after printing in terminal.

	return 0;
	// return in main() marks the exit point for the program itself.
	// return 0 returns the integer zero for "int" main.
	// 0 symbolizes success, if we do return 1 instead the code will run the same way but tell the compiler error code 1.
}
