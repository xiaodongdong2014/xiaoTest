#include <iostream>
#include <string>
using namespace std;

bool isUniqueChar(string str){
	if(str.length()>256) return false;
	bool* char_set=new bool[256];
	for(int i=0;i<str.length();i++){
		int val=(int)str[i];
		if(char_set[val])
			return false;
		char_set[val]=true;
	}
	return true;
}

// the second solutions:assume that the string is noly the a~z;
bool isUniqueChar2(string str){
	if(str.length()>256)	
		return false;
	int check=0;
	for(int i=0;i<str.length();i++){
		int val=str[i]-'a';
		if((check&(1<<val))!=0)
			return false;
		check|=(1<<val);
	}
	return true;
}

//sort the string if we can change the string
bool isUniqueChar3(string & str){
	if(str.length()>256)
		return false;
	sort(str.begin(),str.end());
	for(int i=0;i<str.length()-1;i++){
		if(str[i]==str[i+1])
			return false;
	}
	return true;
}

int main(){
	string teststr;
	cin>>teststr;
	if(isUniqueChar3(teststr))
		cout<<"it is a unique char!"<<endl;
	else
		cout<<"it is not a unique char!"<<endl;
	return 0;
}
