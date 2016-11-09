#include <iostream>
#include <cmath>
using namespace std;

int find_max(int a[],int len){
	int max=a[0];
	for(int i=1;i<len;i++)
		if(a[i]>max)
			max=a[i];
	return max;
}

int digit_num(int num){
	int digit=0;
	do{
		num/=10;
		digit++;
	}while(num!=0);
	return digit;
}

int kth_digit(int num,int kth){
	num/=pow(10,kth);
	return num%10;	
}

void radix_sort(int a[],int len){
	int *temp[10];
	int count[10]={0,0,0,0,0,0,0,0,0,0};
	int max=find_max(a,len);
	int maxdigit=digit_num(max);
	int i,j,k;
	for(i=0;i<10;i++){
		temp[i]=new int[len];
		memset(temp[i],0,sizeof(int)*len);
	}
	for(i=0;i<len;i++){
		memset(count,0,sizeof(int)*10);
		for(j=0;j<len;j++){
			int xx=kth_digit(a[j],i);
			temp[xx][count[xx]]=a[j];
			count[xx]++;
		}	
		int index=0;
		for(j=0;j<10;j++){
			for(k=0;k<count[j];k++)
				a[index++]=temp[j][k];
		}
	}
}

int main(){
	int a[]={22,32,19,53,47,29};
	radix_sort(a,6);
	for(int i=0;i<6;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	return 0;
}


