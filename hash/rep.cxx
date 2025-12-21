#include<iostream>
using namespace std;
int main(){
	string s= "abcda";
	bool fre[26]={false};

	for(int i=0;i<26;i++){
		int c= s[i] - 'a';

		if (fre[c]==true){
			cout<<"repeated element  "<<s[i];
			break;
		}
		fre[c]= true;
	}
	return 0;
}

