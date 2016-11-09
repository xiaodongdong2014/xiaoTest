#include <iostream>
using namespace std;

void Merge(int a[],int tmp[],int lpos,int rpos,int rend){
	int i,lend,num,tmppos;
	lend=rpos-1;
	tmppos=lpos;
	num=rend-lpos+1;
	while(lpos<=lend and rpos<=rend){
		if(a[lpos]<a[rpos])
			tmp[tmppos++]=a[lpos++];
		else
			tmp[tmppos++]=a[rpos++];
	}
	while(lpos<=lend)
		tmp[tmppos++]=a[lpos++];
	while(rpos<=rend)
		tmp[tmppos++]=a[rpos++];
	for(i=0;i<num;i++,rend--)
		a[rend]=tmp[rend];	
}

void msort(int a[],int tmp[],int low,int high){
	if(low>=high)
		return ;
	int middle=low+(high-low)/2;
	msort(a,tmp,low,middle);
	msort(a,tmp,middle+1,high);
	Merge(a,tmp,low,middle+1,high);
}

void merge_sort(int a[],int len){
	int *tmp=NULL;
	tmp=new int[len];
	if(tmp!=NULL){
		msort(a,tmp,0,len-1);
		delete [] tmp;
	}
}

int main(){
	int a[8]={8,6,1,3,5,2,4,7};
	merge_sort(a,8);
	for(int i=0;i<8;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}


