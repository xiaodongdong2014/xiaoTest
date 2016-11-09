#include <iostream>
using namespace std;

template <typename T>
T maxv(T a,T b){
	return a>b?a:b;
}

int main(void){
	cout<<maxv(1,2)<<endl;
	cout<<maxv(1.1f,2.2f)<<endl;
	cout<<maxv(1.11l,2.22l)<<endl;
	cout<<maxv('A','B')<<endl;
	cout<<maxv<double>(1,1.1)<<endl;
	return 0;
}
