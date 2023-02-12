#include<iostream>
using namespace std;
int main(){
	bool test=true;
	int size,count=0;
	cout<<"How many elements you want to enter :";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<endl<<endl;
	for(int i=0;i<size;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			cout<<arr[i]<<" ";
			count++;
		
	}
	}
	if(count==0){
		cout<<"No peak found ..";
	}
	return 0;
}

