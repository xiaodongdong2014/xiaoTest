#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void print(vector<T> &a){
	for(vector<int>::iterator it=a.begin();it!=a.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}

int main(){
	vector<int> array;
	array.push_back(1);
	array.push_back(2);
	array.push_back(3);
	array.push_back(3);
	array.push_back(4);
	array.push_back(5);

	array.erase(array.begin());
	print(array);

	vector<int>::iterator pos1;
	pos1=remove(array.begin(),array.end(),2);	
	print(array);	
	if((pos1+1)==array.end())
		cout<<"(pos1+1)==array.end()"<<endl;

	remove(array.begin(),array.end(),3);
	print(array);

	return 0;
}



