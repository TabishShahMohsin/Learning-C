#include<stdio.h>


int main(){

	char s[]="Tabish Shah Mohsin";
	char c='z';

	for(int i=0;;i++){

		if(*(s+i)==c){
			printf("The char was found.\n");
			return 0;
		}
		
		if(*(s+i)=='\0')
			break;

	}
	
	printf("No such char was found.\n");
	return 0;
}
