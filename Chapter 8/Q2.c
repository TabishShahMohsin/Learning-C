#include<stdio.h>

int main(){

	int n;
	printf("Enter the length of the string: ");
	scanf("%d", &n);
	
	char s[n+1], t[n+1];
	printf("Enter a single word: ");
	scanf("%s", s);
	printf("Enter word letter by letter: ");
	fflush(stdin);
	// Gets rid of the newline from the above scanf.
	for(int i=0; i<n; i++){
		scanf("%c", t+i);
		fflush(stdin);
		// Gets rid of the newline after every enter.
	}	
		// Again spaces are needed in scanf
	
	s[n]='\0';
	t[n]='\0';
	
	puts(s);
	puts(t);
	return 0;
}
