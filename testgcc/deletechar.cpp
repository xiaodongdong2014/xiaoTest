#include <stdio.h>

char *deletechar(char *str,char c){
	char *head=NULL;
	char *p=NULL;
	if(str==NULL) return NULL;
	head=p=str;
	while(*p){
		printf("*p:%c\n",*p);
		if(*p != c){
			*str++=*p;
		}
		p++;
	} 
	*str='\0';
	return head;
}


int main(void){
	char string[]="cgabcdefcg";
	deletechar(string,'c');
	printf("delete:%s\n",string);
	return 0;
}
