#include<iostream>
using namespace std;
int main(){
	int length,vol=0;
	cout<<"ENter length :";
	cin>>length;
	int arr[length];
	for(int i=0;i<length;i++){
		cin>>arr[i];
	}
	for(int i=0;i<length;i=i+3){
		vol=arr[i]*arr[i+1]*arr[i+2]+vol;
	}
	cout<<"Volume :"<<vol;
	return 0;
	
}
