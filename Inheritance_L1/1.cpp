#include<iostream>
using namespace std;

class X{
	public:
		int a,b,c;	
};
class Y : public X{
	public:
		void setData(int a ,int b,int c){
			this -> a=a;
			this -> b=b;
			this -> c=c;
		}
		void getData(){
			int SumOfCube;
			
			SumOfCube=a*a*a+b*b*b+c*c*c;
			
			cout<<"Sum Of Cube :"<<SumOfCube;
		}
};
int main(){
	Y obj;
	
	obj.setData(3,4,5);
	
	obj.getData();
	
	return 0;
}
