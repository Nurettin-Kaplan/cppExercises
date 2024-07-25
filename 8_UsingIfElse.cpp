#include <iostream>
using namespace std;

int main(){
	
	int num; 
	
	cout << "Enter the number: ";
	cin >> num;
	
	if(num % 2 == 0){
		cout << "This number " << num << " is even number.\n";
	}
	else{
		cout << "This number " << num << " is odd number.\n";
	}
	
	return 0;
}