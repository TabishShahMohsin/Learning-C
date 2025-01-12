#include<stdio.h>

void str_cpy(char*asof, char*aksdfjkaso);

int main(){

	char name[]="Tabish";
	char name_[]="Aarish";

	str_cpy(name_, name);

	printf("%s\n",name_);

	return 0;

}

void str_cpy(char*to_be_copied_in, char*to_be_copied){
	int i=0;
	while(1){
	
		if(*(to_be_copied+i)=='\0')
			break;
		*(to_be_copied_in+i)=*(to_be_copied+i);
		i++;
	}
	
	*(to_be_copied_in+i)='\0';

}
