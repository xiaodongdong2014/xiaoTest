#include <iostream>
#include <stack>
#include <cassert>
using namespace std;

char* reverse2(const char* s1,const char* token){
	stack<char> stack1;
	const char * ptoken=token,*head=s1,*rear=s1;
	assert(s1 && token);	
	while(*head != '\0'){
		while(*head!='\0' and *head==*ptoken){
			head++;
			ptoken++;
		}
		if(*ptoken == '\0'){
			const char *p=head-1;
			for(p;p>=rear;p--){
				stack1.push(*p);
			}
			ptoken=token;
			rear=head;
		}
		else{
			stack1.push(*rear++);
			head=rear;
			ptoken=token;
		}
	}
	char * preturn= new char[strlen(s1)+1];
	int i=0;
	while(!stack1.empty()){
		preturn[i++]=stack1.top();
		stack1.pop();
	}
	preturn[i]='\0';
	return preturn;
}

int main(void){
	const char welcom[]="Welcome you, you are my friend!";
	const char token[]="you";
	char * pre=reverse2(welcom,token);
	printf("reverse:%s\n",pre);
	return 0;
}
