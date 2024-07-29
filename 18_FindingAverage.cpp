#include <iostream>
using namespace std;

int main(){
	
	int piece, num, max = -9999, min = 9999;
	double avg, sum = 0;
	
	cout << "Enter the number of values you want to input: ";
	cin >> piece;

	for(int i = 0; i < piece; i++){
		cout << "Enter the number " << i + 1 << ": ";
		cin >> num;
		
		sum += num;
		
		if(num > max){
			max = num;
		}
		if(num < min){
			min = num;
		}
	}
	
	avg = sum / piece;
	
	cout << "Largest Number: " << max << "\n";
	cout << "Smallest Number: " << min << "\n";
	cout << "Total: " << sum << "\n";
	cout << "Average of the entered numbers: " << avg << "\n";
	
	return 0;
}