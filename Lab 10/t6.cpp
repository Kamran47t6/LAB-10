#include<iostream>
using namespace std;
int main(){
	int arr[10],min=0,temp=0;
	cout<<"Enter weight of packages :";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}

	for(int i=0;i<10;i++){
	min=arr[i];
	for(int j=i+1;j<10;j++)	{
		
          if(arr[j]<min){
          	temp=min;
          	min=arr[j];
          	arr[j]=temp;
		  }
          }
		  
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
	
}
