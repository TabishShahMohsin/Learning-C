#include<stdio.h>
#include<string.h>

int main(){

	char s[]="Tabish";

	for(int i=0; i<strlen(s); i++)
		*(s+i)=*(s+i)+1;
	
	puts(s);
	
	return 0;
}
