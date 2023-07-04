#include <iostream>
using namespace std;

class ClassMember{
	public:
    	void Member0() {
        	cout<<"No arguments in Function."<<endl;
    }

    	void Member1(int a) {
        	cout<<"Function with 1 argument is: "<<a<<endl;
    }

    	void Member2(int a, int b) {
        	cout<<"Function with 2 arguments is: "<<a<<", "<<b<<endl;
    }

    	void Member3(int a, int b, int c) {
        	cout<<"Function with 3 arguments is: "<<a<<", "<<b<<", "<<c<<endl;
    }
};

int main() {
	
    ClassMember obj;

    obj.Member0();
    obj.Member1(22);
    obj.Member2(22,45);
    obj.Member3(22,45,5);

    return 0;
}
