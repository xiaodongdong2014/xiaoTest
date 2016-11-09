#include <stdio.h>
#include <stdlib.h>
#include <iostream>
void * memcpy2(void *mento,const void *menfrom,size_t size ){
	if(mento == NULL or menfrom == NULL){
		return NULL;
	}
	char *tmpto=(char*)mento;
	char *tmpfrom=(char*)menfrom; 
	while(size-->0){
		*tmpto++=*tmpfrom++;
	}
	return mento;
}

int main(void){
	char strSrc[]="Hello World!";
	char strDest[12];
	memcpy2(strDest,strSrc,11);
	//strDest[4]=0;	
	printf("strDest:%s\n",strDest);
	printf("sizeof strSrc:%lu\n",sizeof(strSrc));
	printf("strlen:%lu\n",strlen(strSrc));
	char b[]="12\001956";
	std::cout<<strlen(b)<<" "<<sizeof(b)<<std::endl;
	std::cout<<b[1]<<"   "<<b[2]<<b[3]<<"  "<<std::endl;
	std::cout<<b<<std::endl;
	return 0;
}
