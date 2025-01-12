#include<stdio.h>

int str_length(char*something);

int main(){

	char name[7]="Tabish";
	printf("The length of the string is: %d\n", str_length(name));

	return 0;
}

int str_length(char*ptr){
	int n=0;

	while(1){
	
		if(*(ptr+n)=='\0')
			break;
		n++;
	
	}

	return n;

}
