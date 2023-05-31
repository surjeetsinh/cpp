#include<iostream>

using namespace std;

int main() {
	
	char a;
	cout<<"Enter Value : ";
	cin>>a;
	
	if(a>='0' && a<='9') {
	cout<<a<<" : is Numeric";	
	}
	else {
		cout<<a<<" : isn't Numeric";
	}
	
	return 0;
}
