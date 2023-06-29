#include<iostream>
using namespace std;

class Data{
	private:
		int cust_id;
		char cust_name[50];
		int cust_age;
		char cust_telecome_brand_name[100];
		char cust_mobile_number[50];
		char cust_city[30];
		int cust_simcard_validity;
	
	public:
		void setter(){
			cout<<"Enter Your id :";
			cin>>cust_id;
			
			cout<<"Enter Your name :";
			cin>>cust_name;
			
			cout<<"Enter Your age :";
			cin>>cust_age;
			
			cout<<"Enter Your Telecome Brand Name :";
			cin>>cust_telecome_brand_name;
			
			cout<<"Enter Your Mobile Number :";
			cin>>cust_mobile_number;
			
			cout<<"Enter Your City :";
			cin>>cust_city;
			
			cout<<"Enter Your Simacard Validity :";
			cin>>cust_simcard_validity;
		}
		void getter(){
			cout<<"cust_id : " <<cust_id <<endl;
			cout<<"cust_name : " <<cust_name << endl;
			cout<<"cust_age : " <<cust_age << endl;
			cout<<"cust_telecome_brand_name : " <<cust_telecome_brand_name << endl;
			cout<<"cust_mobile_number :"<<cust_mobile_number<<endl;
			cout<<"cust_city : " <<cust_city << endl;
			cout<<"cust_simcard_validity : " <<cust_simcard_validity << endl;
		}
};

int main(){
	Data obj;
	
	obj.setter();
	
	obj.getter();
	
	return 0;
}
