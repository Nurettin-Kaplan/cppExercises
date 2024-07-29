#include <iostream>
#include <string>
using namespace std;
/* a program that checks the speed of moving buses, trucks, and cars

	Maximum Speed
	
	Car : 82
	Bus : 70
	Truck : 50
*/
int main(){
	
	string vehicleType;
	double speed;
	int penalty = 0;
	
	cout << "Enter the type of vehicle (Bus, Truck, Car): ";
	cin >> vehicleType;
	
	cout << "Enter the speed of the vehicle (km/h): ";
	cin >> speed;

	if((vehicleType.compare("Car") == 0) || (vehicleType.compare("car") == 0)){
		if(speed >= 82){
			penalty = 1;
		}
	}
	else if((vehicleType.compare("Truck") == 0) || (vehicleType.compare("truck") == 0)){
		if(speed >= 50){
			penalty = 1;
		}
	}
	else if((vehicleType.compare("Bus") == 0) || (vehicleType.compare("bus") == 0)){
		if(speed >= 70){
			penalty = 1;
		}
	}
	
	cout << "This vehicle is " << vehicleType << ".\n";
	
	if(penalty == 1){
		cout << "This vehicle is penalized.\n";
	}
	else{
		cout << "This vehicle is not penalized.\n";
	}
	
	return 0;
}