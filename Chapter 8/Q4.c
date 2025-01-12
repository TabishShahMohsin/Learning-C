#include<stdio.h>

void slice(char*aksajdfkjaskfj, int m, int n);

int main(){

	char name[]="Tabish Shah Mohsin";
	slice(name, 7,11);
	printf("%s\n",name);

	return 0;
}

void slice(char (*ptr), int m, int n){
	// index m is included and n isn't
	for(int i=0; i<(n-m);i++)
		*(ptr+i)=*(ptr+i+m);
	*(ptr+n-m)='\0';

}
