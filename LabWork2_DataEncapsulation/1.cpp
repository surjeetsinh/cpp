#include<iostream>
using namespace std;

class hotel{
	private:
    int	hotel_id;
	char hotel_name[100];
	char hotel_type [100];
	int  hotel_rating;
	char hotel_location[100];
	int  hotel_establish_year;
	int	 hotel_staff_quantity;
	int  hotel_room_quantity;
	
	public:
	void setter(){
		cout<<"Enter hotel id: ";
		cin>>hotel_id;
		cout<<"Enter hotel name: ";
		cin>> hotel_name;
		cout<<"Enter hotel type: ";
		cin>>hotel_type;
		cout<<"Enter hotel rating: ";
		cin>>hotel_rating;
		cout<<"Enter hotel location: ";
		cin>>hotel_location;
		cout<<"Enter hotel establish year: ";
		cin>>hotel_establish_year;
		cout<<"Enter hotel staff quantity: ";
		cin>>hotel_staff_quantity;
		cout<<"Enter hotel room quantity: ";
		cin>>hotel_room_quantity;
	}	
	void getter(){
		cout<<"hotel id: "<<hotel_id<<endl;
		cout<<"hotel name: "<<hotel_name<<endl;
		cout<<"hotel type: "<<hotel_type<<endl;
		cout<<"hotel rating: "<<hotel_rating<<endl;
		cout<<"hotel location: "<<hotel_location<<endl;
		cout<<"hotel establish year: "<<hotel_establish_year<<endl;
		cout<<"hotel staff quantity: "<<hotel_staff_quantity<<endl;
		cout<<"hotel room quantity: "<<hotel_room_quantity<<endl<<endl<<endl;
			
	}
};

int main(){
	hotel obj[3];
	int i;
	for(i=0; i<=3; i++){
		obj[i].setter();
	}
	for(i=0; i<=3; i++){
		obj[i].getter();
	}
	return 0;
}
