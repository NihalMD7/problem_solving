#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6};
	int target=6;
	int left=0;
	int n= sizeof(arr)/sizeof(arr[0]);
	int right=n-1;
	while(left<right){
	int sum= arr[left]+arr[right];
	if(sum==target){
	cout<< arr[left]<<"+"<<arr[right];
	return 0;
	}
	else if (sum > target){
	right--;
	}
	else{
	left++;
	}
	}
	cout<<"no pairs found"<<endl;
	return 0;
}
