#include<stdio.h>

void good_afternoon();
void good_night();
void good_morning();
// Need a semi-colon after function definition.

int main(){

	good_morning();
	good_afternoon();
	good_night();

	return 0;
}
// No need to use semi-colons after functions inlcudeing main
// However by defualt-always the main function is compiled and used

void good_night(){
	printf("Good Night\n");
}
// May not use a semi-colon here.

void good_morning(){
	printf("Good Morning\n");
}

void good_afternoon(){
	printf("Good Afternoon\n");
}
