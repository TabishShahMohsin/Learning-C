#include<stdio.h>
#include<string.h>

int main(){

	char s[7]="Tabish";

	for(int i=0;i<strlen("Tabish");i++)
		printf("%c", *(s+i));

	printf("\n");

	return 0;
}
