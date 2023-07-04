#include <iostream>
using namespace std;

class Data{
private:
    int a;

public:
    void set(int a){
    	this->a=a;
	}
	
	void get(){
		cout<<a<<endl;
	}
	
	Data operator ++ (){
		Data temp;
		temp.a=++a;
		return temp;
	}
	Data operator --(){
		Data temp;
		temp.a=--a;
		return temp;
	}
};

int main() {
   Data obj1,obj2;
   
   obj1.set(20);
   obj2=++obj1;
      obj2.get();

   obj2=--obj1;
      obj2.get();

    return 0;
}
