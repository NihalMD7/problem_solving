#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,1,2,3};
	int n= sizeof(arr)/sizeof(arr[0]);

	int fre[100]={0};
	for(int i=0;i<n;i++){
		fre[arr[i]]++;
	}
	for(int j=0;j<=100;j++){
		if(fre[j]>1){
			cout<<j<<"";
		}
	}
	return 0;
}
