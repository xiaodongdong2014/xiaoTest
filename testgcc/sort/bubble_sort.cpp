#include <iostream>
using namespace std;

void bubble_sort(int a[],int n){
	int i,j,tmp;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
		}
}

void bubble_sort2(int a[],int n){
	int i,j,tmp;
	int ex=0;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
				ex=1;	
			}
		}
		if(ex==0)
			return ;
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
	bubble_sort(a,9);
	print_array(a,9);
	return 0;
}
