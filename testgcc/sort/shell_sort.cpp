#include <iostream>
using namespace std;

void shell_sort(int a[],int n){
	int h,i,j,tmp;
	for(h=n/2;h>0;h=h/2){
		for(i=h;i<n;i++){
			tmp=a[i];
			for(j=i-h;j>=0 and tmp<a[j];j-=h)
				a[j+h]=a[j];
			a[j+h]=tmp;
		}
	}
}

void print_array(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(int argc,char** argv){
	int a[]={4,1,3,1,36,7,12,11,16};
	print_array(a,9);
	shell_sort(a,9);
	print_array(a,9);
	return 0;
}
