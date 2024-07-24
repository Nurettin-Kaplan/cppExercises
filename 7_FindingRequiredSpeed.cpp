#include<iostream>
using namespace std;
// a program that calculates the required speed by asking the user for the distance to be traveled and the arrival time
int main(void){
	
	float distance, time, speed;
	
	cout << "How far do you want to travel:(km): ";
	cin >> distance;
	
	cout << "Enter the time you want to reach:(h): ";
	cin >> time;

	speed = distance / time;
	
	cout << "Required speed: " << speed << endl;
	
	return 0;
}