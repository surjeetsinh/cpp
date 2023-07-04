#include<iostream>
using namespace std;

int main(){
	
	char password;
	
	cout<<"Enter Password : " ;
	cin>>password;
	
	try{
		if(password>='A' && password<='Z'){
			throw password;
		}
		else{
			cout<<"Not Valid Password"<<endl;
		}
	}
	
	catch(...){
		cout<<"Password is valid"<<endl;
	}	
	return 0;
}
