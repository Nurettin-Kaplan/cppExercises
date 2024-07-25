#include<iostream>
using namespace std;
// a program that asks the user to enter two numbers and prints the average of these numbers on the screen
int main(void){
	
	int num1, num2;
	float avg;

	cout << "Enter the first number: ";
	cin >> num1;
	
	cout << "Enter the second number: ";
	cin >> num2;

	avg = (num1 + num2) / 2.0;

	cout << "Number: " << avg;
	
	return 0;
}