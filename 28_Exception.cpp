#include<iostream>
#include<string>
using namespace std;

int main(){

	double num1, num2, result;

	cout << "Welcome To The Division Operation Application.\n\n";

	cout << "Enter the dividend:  ";
	cin >> num1;
	
	cout << "Enter the divisor: ";
	cin >> num2;
	
	try{
		if(num2 == 0){
			string err = "The division of any number by 0 is undefined.";
			throw err;
		}
		result = num1 / num2;
		cout << "Result: " << result;
	}
	catch(string err){
		cout << err;
	}
	
	return 0;
}