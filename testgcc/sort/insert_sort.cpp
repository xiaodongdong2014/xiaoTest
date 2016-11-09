#include <iostream>
using namespace std;

void insert_sort(int a[],int n){
	int tmp;
	for(int i=1;i<n;i++){
		tmp=a[i];
		int j;
		for(j=i-1;j>=0 and tmp<a[j];j--){
			a[j+1]=a[j];
		}	
		a[j+1]=tmp;
	}
}

void print_array(int a[],int len){
	for(int i=0;i<len;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}


int main(int argc,char ** argv){
	int a[]={1,3,0,5,8,2,7,12,11};
	print_array(a,9);
	insert_sort(a,9);
	print_array(a,9);
	return 0;
}
