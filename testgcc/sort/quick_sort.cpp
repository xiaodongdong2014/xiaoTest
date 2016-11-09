#include <iostream>
using namespace std;

void quick_sort(int a[],int low,int high){
	int i,j,pivot;
	if(low<high){
		i=low;
		j=high;
		pivot=a[low];
		while(i<j){
			while(i<j and a[j]>=pivot){
				j--;
			}
			if(i<j)
				a[i++]=a[j];
			while(i<j and a[i]<=pivot)
				i++;
			if(i<j)
				a[j--]=a[i];
		}
		a[i]=pivot;
		quick_sort(a,low,i-1);
		quick_sort(a,i+1,high);
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
	quick_sort(a,0,8);
	print_array(a,9);
	return 0;
}
