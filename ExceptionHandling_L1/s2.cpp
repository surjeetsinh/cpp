#include<iostream>
using namespace std;

int main(){
	
	int age;
	
	cout<<"Enter Age : ";
	cin>>age;
	
	try{
		if(age<18){
			throw age;
		}
		else{
			cout<<endl<<"You are eligible To Vote"<<endl;
		}
	}
	
	catch(...){
		cout<<"Sorry, You Can't Vote"<<endl;
	}
	
	return 0;
}
