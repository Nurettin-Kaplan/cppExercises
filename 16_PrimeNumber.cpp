#include <iostream>
using namespace std;

int main(){
	
	int num, isPrime = 1;
	
	cout << "Enter the number you want to check for primality: ";
	cin >> num;
	
	if(num == 0 || num == 1){
		cout << "The number " << num << " is not prime.\n";
		return 1;
	}
	
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			isPrime = 0;
			break;
		}
	}
	
	if(isPrime == 1){
		cout << "The number " << num << " is prime.\n";
	}
	else{
		cout << "The number " << num << " is not prime.\n";
	}
	
	return 0;
}