#include <iostream>
using namespace std;

void RevStr(char *src){
	if(src==NULL) return ;
	char *start=src,*end=src,*ptr=src;
	while(*src == ' ') src++;
	start=end=src;
	while(*ptr++!='\0'){
		if(*ptr==' ' or *ptr=='\0'){
			end=ptr-1;
			while(start<end){
				swap(*start++,*end--);
			}
			start=end=ptr+1;
		}
	}
	start=src,end=ptr-2;
	while(start<end){
		swap(*start++,*end--);
	}
}

int main(void){
	char src[]=" aaabbb bbbbcccc";
		cout<<src<<endl;
		RevStr(src);
		cout<<src<<endl;
	return 0;	

}
