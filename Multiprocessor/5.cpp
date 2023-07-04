#include<iostream>
using namespace std;

class Data{
	private:
		int n;
		
	public:
	void set(int n){
		this->n=n;	
    }
    
    void get(){
        cout<<n<<endl;	
	}
	
	Data operator+(Data a){
		Data temp;
		temp.n=n +a.n;
		return temp;
	}
};
int main(){
	
	Data obj1,obj2,obj3;
	obj1.set(20000);
	obj2.set(10000);
	
	obj3=obj1+obj2;
	obj3.get();
	
	return 0;
}
