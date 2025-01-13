#include<stdio.h>

int count(char*ptr, char c);

int main(){
	
	char name[]="Tabish Shah Mohsin";
	printf("%d\n", count(name, 'h'));
	

	return 0;
}

int count(char*ptr, char c){

	int n=0;
	int i=0;

	while(1){

		if(*(ptr+i)=='\0')
			break;
		if(*(ptr+i)==c)
			n++;
		i++;

	}

	return n;

}
