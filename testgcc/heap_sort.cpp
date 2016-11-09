#include <iostream>
using namespace std;

int heapsize=0;

int Left(int index){ return (index<<1)+1;}
int Right(int index){ return (index<<1)+2;}
void swap(int *a,int *b){ int tmp=*a;*a=*b;*b=tmp;}

void maxHeapify(int array[],int index){
	int largest=0;
	int left=Left(index);
	int right=Right(index);
	if(left<=heapsize and array[left]>array[index])
		largest=left;
	else
		largest=index;
	if(right<=heapsize and array[right]>array[largest])
		largest=right;
	if(largest!=index){
		swap(&array[index],&array[largest]);
		maxHeapify(array,largest);
	}	
}

void buildmaxheap(int array[],int length){
	int i;
	heapsize=length;
	for(i=(length>>1);i>=0;i--){
		maxHeapify(array,i);
	}
}

void heap_sort(int array[],int length){
	int i;
	buildmaxheap(array,length-1);
	for(i=(length-1);i>=1;i--){
		swap(&array[0],&array[i]);
//		cout<<"sort: "<<array[0]<<"  "<<array[i]<<" ";
		heapsize--;
		maxHeapify(array,0);
//		break;
	}
//	cout<<endl;
}

int main(){
	int array[8]={45,68,20,39,88,97,46,59};
	heap_sort(array,8);
	for(int i=0;i<8;i++)
		cout<<array[i]<<"  ";
	cout<<endl;
	return 0;
}



