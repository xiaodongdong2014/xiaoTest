#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *transfomation(char * str){
	if(str == NULL) return NULL;
	int len=strlen(str);
	if(len == 0) return str;
	char *buf=new char[len+1];
	char *p=str;
	char *q=p+1;
	int count=1;
	while(*q){
		if(*p==*q){
			count++;
			p++;
			q++;
		}
		else{
			sprintf(buf,"%d",count);
			int nbits=strlen(buf);
			strcat(buf,q);
			*q=0;
			strcat(str,buf);
			q+=nbits;
			p=q;
			q=q+1;
			count=1;
		}
	}
	sprintf(buf,"%d",count);
	strcat(str,buf);
	delete []buf;
	buf=NULL;
	return str;
}

#define MAXCOUNT 300
int main(void){
	char str[MAXCOUNT];
	printf("Please input a string:\n");
	scanf("%s",str);
	char *pstr=transfomation(str);
	printf("after transfomation:%s\n",str);

}



