#include<iostream>
using namespace std;
// a program that calculates the area and perimeter of a square given the length of one side
int main(void){
	
	int side, area, perimeter;

	cout << "Enter the length of one side of the square: ";
	cin >> side;
	
	area = side * side;	
	perimeter = side * 4;
	
	cout << "Area: " << area << "\n";
	cout << "Perimeter: " << perimeter << "\n";
	
	return 0;
}