#include<iostream>
using namespace std;
// a program that calculates the area and perimeter of a rectangle given the lengths of its two sides
int main(void){
	
	int side1 ,side2, area, perimeter;
	
	cout << "Enter the length of the first side of the rectangle: ";
	cin >> side1;
	
	cout << "Enter the length of the second side of the rectangle: ";
	cin >> side2;
	
	area = side1 * side2;
	perimeter = (side1 * 2) + (side2 * 2);
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
	
	return 0;
}