#include<stdio.h>

int main(){

	char s[]={'T', 'a', 'b', 'i', 's', 'h', '\0'}, u[]="Tabish", *something="Tabish Shah Mohsin";
		
	int t[]={1,2,3,4,5,6, '\0'};
	// int string will also have a null char at the end.
	//puts(const char *)
		// Can't even use this for int strings
	// Your not meant to do this in C, you will not be able to print this using %s
	
	
	
	// single quotes qre for characters
	// double quotes are for strings
	
	printf("%s\n", something);
	// So, s[] this basically means *s but more readable
	// %s within print might feel weired due to something being a pointer, and not a variable.
	
	printf("%lu", sizeof(u));
	printf("Enter a single word: ");
	scanf("%s", u); // Can't take this way a multi worded string.
	printf("The string entered is: %s\n", u);
	printf("Can enter a multi word string: ");

	fflush(stdin);

	fgets(u, sizeof(u), stdin);
	puts(u);
	
	return 0;
}
