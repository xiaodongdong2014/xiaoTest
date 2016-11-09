#include <iostream>
#include "test.h"
#define ARR_SIZE(a) (sizeof(a)/sizeof(a[0]))
int test(int a,int b){
	return a+b;
}

int main(){
      test* tt;
      tt->printinfo(12);
/**
        char *cp= "abcde";
        std::cout<<cp<<std::endl;
        std::cout<<*cp<<std::endl;
	if(cp == &cp[0]){
//		std::cout<<&cp[0]<<std::endl;
	}


	int  p[6]={1,2,3,4,5,6};
//	std::cout<<p<<std::endl;
	std::cout<<"hello"<<std::endl;
        int arr[100];
//        std::cout<<ARR_SIZE(arr);
	int (*q)(int,int);
	q=&test;
	std::cout<<"q:"<<&q<<"test:"<<&test<<std::endl;        
        return 0;
**/
	return 0;
}
