#include<iostream>
using namespace std;
bool compareStrings(string s,string t){
	if (s.length()!=t.length()){
		return false;
	}
	int fre_s[26]={};
	int fre_t[26]={};
	for(int i =0;i<s.length();i++){
		fre_s[s[i]-'a']++;
		fre_t[t[i]-'a']++;
	}
	for(int i =0;i<26;i++){
		if(fre_s[i]!=fre_t[i]){
			return false;
	
	}
	}
	return true;
}
int main (){
	string s = "racecar";
        string t = "carrace";
	if (compareStrings(s,t)!= true){
		cout<< "false"<<endl;
	}
	cout<<" true"<<endl;
}
