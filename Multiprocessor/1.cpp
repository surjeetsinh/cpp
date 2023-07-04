#include<iostream>
#include<string.h>
using namespace std;

class Message{
	private:
		char Name[100];  
	public:
		Message(char a[]){
			strcpy(Name,a);
		}
		void print(){
			cout<<"Your name: ";
		}
		void print(char Lastname[]){
			cout<<Name<<" "<<Lastname<<endl;
		}
}; 

int main(){
    Message obj("Surjeetsinh") ;
	obj.print();
	obj.print("Rathod");
	return 0;
}
