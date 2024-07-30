#include<iostream>
#include<string>
using namespace std;

class Car{
	public:				// access specifiers
		string brand;
		string model;
		int year;
		
		Car(string x, string y, int z){		// constructors
			cout << "The constructor method worker.\n";
			
			brand = x;
			model = y;
			year = z;
		}
};

int main(){

	Car obj1("Mercedes", "S400", 2019);
	Car obj2("Ford", "Kuga", 2021);
	
	cout << obj1.brand << " " << obj1.model << " " << obj1.year << "\n";
	cout << obj2.brand << " " << obj2.model << " " << obj2.year << "\n";
	
	return 0;
}