#include<iostream>
using namespace std;
int main(){
    int size,count=0;
    int arr[size];
    cout<<"ENter number of days :";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
     for(int i=0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
     }
     cout<<"Output"<<count<<endl;
     return 0;
}
