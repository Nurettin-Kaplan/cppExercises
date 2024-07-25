#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	int pieces, num, largest = INT_MIN, smallest = INT_MAX;
	
	cout << "Enter how many numbers you want to input: ";
	cin >> pieces;
	
	for(int i = 0; i < pieces; i++){
		cout << "Enter the " << i + 1 << "th number: ";
		cin >> num;
		
		if(num > largest){
			largest = num;
		}
		if(num < smallest){
			smallest = num;
		}
	}

	cout << "The largest Number: " << largest << "\n";
	cout << "The smallest Number: " << smallest << "\n";
	
	return 0;
}