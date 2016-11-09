#include <stdio.h>
#include <iostream>
using namespace std;
int main(void){
	unsigned int a=4;
	int b=-6;
	int c=a+b;
	unsigned int d=a+b;
	cout<<c<<"  "<<d<<endl<<endl;

	printf("a+b:%d\n",a+b);
	printf("a+b:%d\n",b+a);
	printf("a+b:%d\n",5.01);
	return 0;
}
