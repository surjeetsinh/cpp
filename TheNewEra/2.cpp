#include<iostream>
using namespace std;
class Home {
	private:
		int house;
		int room;
		int kitchen;
};

int main(){
	
	Home hm1,hm2,hm3,hm4,hm5;
	
	hm1.house=111;
	hm1.room=8;
	hm1.kitchen=1;
	
	cout<<"House Number: "<<hm1.house<<endl;
	cout<<"Total Rooms are : "<<hm1.room<<endl;
	cout<<"Total Kitchen are : "<<hm1.kitchen<<endl<<endl;
	
	hm2.house=113;
	hm2.room=6;
	hm2.kitchen=1;
	
	cout<<"House Number: "<<hm2.house<<endl;
	cout<<"Total Rooms are : "<<hm2.room<<endl;
	cout<<"Total Kitchen are : "<<hm2.kitchen<<endl<<endl;
	
	hm3.house=115;
	hm3.room=7;
	hm3.kitchen=1;
	
	cout<<"House Number: "<<hm3.house<<endl;
	cout<<"Total Rooms are : "<<hm3.room<<endl;
	cout<<"Total Kitchen are : "<<hm3.kitchen<<endl<<endl;
	
	hm4.house=117;
	hm4.room=6;
	hm4.kitchen=1;
	
	cout<<"House Number: "<<hm4.house<<endl;
	cout<<"Total Rooms are : "<<hm4.room<<endl;
	cout<<"Total Kitchen are : "<<hm4.kitchen<<endl<<endl;
	
	hm5.house=119;
	hm5.room=5;
	hm5.kitchen=1;
	
	cout<<"House Number: "<<hm5.house<<endl;
	cout<<"Total Rooms are : "<<hm5.room<<endl;
	cout<<"Total Kitchen are : "<<hm5.kitchen<<endl<<endl;
	
	return 0;
}
