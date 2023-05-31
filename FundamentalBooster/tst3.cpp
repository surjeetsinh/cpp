#include<iostream>
using namespace std;

int main(){
	char z;
	cout<<"Enter Character to check if its Vowel or Not : ";
	cin>>z;
	
	if (z=='a' || z=='e' || z=='i' || z=='o' || z=='u'){
		cout<<z<<" : is Vowel.";
	}
	else if(z=='A' || z=='E' || z=='I' || z=='O' || z=='U'){
		cout<<z<<" : is Vowel.";
		
	}
	else {
		cout<<z<<" : isn't Vowel.";
	}
	
	return 0;
}
