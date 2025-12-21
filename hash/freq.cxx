#include<iostream>
using namespace std;
int main(){
	string s= "aabbc";
	int fre[26]={0};

	for(int i=0;i<s.length();i++){
		int index=s[i]-'a';
		fre[index]++;
	}
	
	for(int i=0;i<26;i++){
		if(fre[i]>0){
			char c= 'a' + i;
			cout<<c<<"->"<<fre[i]<<endl;
		}
	}
	return 0;
}


