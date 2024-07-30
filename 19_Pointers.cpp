#include<iostream>
using namespace std;

int main(){
	
	int elementsNumber, *ptr, largest = INT_MIN, smallest = INT_MAX, sum = 0, searched, isFind = 0;
	
	cout << "Enter the number of elements in the array: ";
	cin >> elementsNumber;
	
	int numbers[elementsNumber];
	
	ptr = numbers;
	
	for(int i = 0; i < elementsNumber; i++){
		cout << "Enter the " << i + 1 << "th element: ";
		cin >> *ptr;
		
		sum += *ptr;
		
		if(*ptr > largest){
			largest = *ptr;
		}
		if(*ptr < smallest){
			smallest = *ptr;
		}
		
		ptr++;
	}
	
	cout << "Enter the number you want to search within the array: ";
	cin >> searched;
	
	for(int i = 0; i < elementsNumber; i++){
		ptr--;
		if(searched == *ptr){
			isFind = 1;
			break;
		}
	}
	
	cout << "\nTotal: " << sum << " Address: " << &sum << "\n";
	cout << "Largest Number: " << largest << " Address: " << &largest << "\n";
	cout << "Smallest Number: "<< smallest << " Address: " << &smallest << "\n";
	
	if(isFind == 0){
		cout << "The number you are looking for is not found in the array.\n";
	}
	else{
		cout << "Found Number: " << *ptr << " Address: " << ptr << "\n";	
	}
	
	return 0;
}