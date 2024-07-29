#include <iostream>
using namespace std;

int main(){
	
	double num1, num2, result;
	char operation;
	
	cout << "--- Welcome to the Calculator ---\n\n";
	
	cout << "Enter the first number: ";
	cin >> num1;
	
	cout << "Enter the operation (+, -, *, /): ";
	cin >> operation;
	
	cout << "Enter the second number: ";
	cin >> num2;
	
	switch(operation){
		case '+': result = num1 + num2; break;
		case '-': result = num1 - num2; break;
		case '*': result = num1 * num2; break;
		case '/': result = num1 / num2; break;
	}
	
	cout << "Result: " << result << "\n";
	
	return 0;
}