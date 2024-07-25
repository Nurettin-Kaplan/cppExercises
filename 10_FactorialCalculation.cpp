#include <iostream>
using namespace std;

int main(){
	
	int num, result = 1;
	
	cout << "Enter the number you want to calculate the factorial of: ";
	cin >> num;
	
	for(int i = 2; i <= num; i++){
		result *= i;
	}
	
	cout << "Result: " << result << "\n";
	
	return 0;
}