#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof arr/sizeof arr[0];
	int k=3;

	int window=0;
	for (int i=0;i<k;i++){
		window +=arr[i];
	}
	int maxsum=window;
	for(int i=k;i<n;i++){
		window=window - arr[i-k]+arr[i];
		if(window>maxsum){
			maxsum=window;
	}
	}
	cout<<"max value in substring "<<maxsum<<endl;
	return 0;

}

