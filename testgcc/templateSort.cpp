#include <iostream>
#include <assert.h>

template <class T>
class Test{
public:
	static void Sort(T * array,int len,bool (*compare)(T &a,T &b)){
		T temp;
		assert(len>=1);
		for(int i=0;i<len-1;i++)
			for(int j=len-1;j>i;j--){
				if(compare(array[j],array[j-1])){
					temp=array[j];
					array[j]=array[j-1];
					array[j-1]=temp;	
				}
			}
	}
};

template <class T>
bool ascend(T& a,T& b)//升序
{
	return a<b? true:false;
}

template <class T>
bool descend(T& a,T& b){
	return a>b? true:false;
}

template <class T>
class myRect{
public:
	myRect():length(0),width(0){}
	myRect(T len,T wid):length(len),width(wid){}
	T Area(){return length*width;}
private:
	T length;
	T width;
};

template <class T>
bool operator > (myRect<T>& rect1,myRect<T>& rect2){
	return rect1.Area()>rect2.Area() ? true:false;
}

template <class T>
bool operator < (myRect<T>& rect1,myRect<T>& rect2){
     return rect1.Area()<rect2.Area() ? true:false;
}

int main(){
	//pages:354 in 《c／c++程序员面试秘籍》	
	return 0;
}


