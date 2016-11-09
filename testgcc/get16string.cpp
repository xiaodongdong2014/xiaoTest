#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get16string(int num){
	int i=0;
	char *buffer=(char*)malloc(11);
	char *tmp;
	buffer[0]='0';
	buffer[1]='x';
	buffer[10]='\0';
	tmp=buffer+2;
	
	for(i=0;i<8;i++){
		tmp[i]=(char)(num<<4*i>>28);
		if(tmp[i]<0) printf("tmp<0:%d\n",tmp[i]);
		tmp[i]=tmp[i]>=0 ? tmp[i]:tmp[i]+16;
		tmp[i]=tmp[i]<10 ? tmp[i]+48:tmp[i]+55;
		
	}
	return buffer;
}

int main(void){
	char * p=NULL;
	p=get16string(-1);
	printf("12345:%s\n",p);

	return 0;
}
