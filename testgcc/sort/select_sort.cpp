#include <iostream>
using namespace std;

void select_sort(int a[],int n){
	int i,j,pos;
	int min;
	for(i=0;i<n-1;i++){
		min=a[i];
		pos=i;
		for(j=i;j<n;j++){
			if(a[j]<min){
				min=a[j];
				pos=j;	
			}
		}
		a[pos]=a[i];
		a[i]=min;
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
	select_sort(a,9);
	print_array(a,9);
	return 0;
}
