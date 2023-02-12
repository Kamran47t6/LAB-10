#include<iostream>
using namespace std;

int main(){
	int length;
	cout<<"Array Length :";
	cin>>length;
	int count,arr[length];
	for(int i=0;i<length;i++){
		cin>>arr[i];
	}
	for(int i=0;i<length;i++){
		if(arr[i]<arr[i+1]){
			count++;
		}
	}
	if(count>=1){
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	return 0;
	
}

