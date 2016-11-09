#include <stdio.h>
#include <string.h>

char * strcpy(char * strDest,char * strSrc){
	if(strDest == NULL or strSrc == NULL){
		return NULL;
	}
	char * tmp=strDest;
	while((*strDest++=*strSrc++)!='\0');

	return tmp;//区别于正常的strcpy函数，这里返回结果而不是在strDest中返回结果，是为了方便计算长度；
}

int getlen(char * strSrc){
	if(strSrc == NULL){
		return 0;
	}
	int len=0;
	while(*strSrc++!='\0'){
		len++;
	}
	return len;
}

int main(void){
	char strSrc[]="hello world!";
	char strDest[20];
	int len=getlen(strcpy(strDest,strSrc));
	printf("strDest:%s\n",strDest);
	printf("len:%d\n",len);

	char tt[]="1234";
	tt[1]='\0';
	printf("%d\n",strlen(tt));	
	printf("%s\n",tt);
	printf("%c\n",tt[2]);

	return 0;
}
