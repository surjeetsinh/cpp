#include<iostream>
using namespace std;

class T20{
	public:
		void getTotalover1(int a,int b){
		   cout<<a+b<<endl;
		}
};

class Test{
	public:
		void getTotalover2(int a,int b){
		   cout<<a+b<<endl;
		}		
};

class Cricket: public T20, public Test{
	public:
		void getTotalover3(int a,int b){
		   cout<<a+b<<endl;
		}
};

int main(){
	Cricket obj;
	
	obj.getTotalover1(10,10);
	obj.getTotalover2(10,20);
	obj.getTotalover3(10,30);
	return 0;
}
