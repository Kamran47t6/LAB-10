#include<iostream>
using namespace std;
int main(){
	int words,count=0;
	cout<<"Enter how many words you want to Enter :";
	cin>>words;
	string arr[words];
	for(int i=0;i<words;i++){
		cin>>arr[i];
	}
	char ch;
	cout<<"ENter the letter you want to count :";
	cin>>ch;
	for(int i=0;i<words;i++){
		string test=arr[i];
		for(int j=0;test[j]!='\0';j++){
			if(test[j]==ch){
				count++;
			}
		}
	}
	cout<<ch<<" shows up to "<<count<<" times in the data";
	
}
