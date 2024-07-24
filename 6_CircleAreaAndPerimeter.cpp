#include<iostream>
using namespace std;
// a program that calculates the area and perimeter of a circle given its radius
int main(void){
	
	const float pi = 3.14;
	float radius, area, perimeter;
	
	cout << "Enter the radius: ";
	cin >> radius;
	
	
	area = pi * radius * radius;
	perimeter = 2 * pi * radius;
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl; 
	
	return 0;
}