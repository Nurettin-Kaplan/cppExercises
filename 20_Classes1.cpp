#include<iostream>
#include<string>
using namespace std;

class Person{
	public: 
	string personName;
	
	void PrintScreen(){
		cout << "Person's Name: " << personName << "\n";
	}
};

int main(){
	
	Person person;
	person.personName = "Nurettin";
	
	person.PrintScreen();
	
	return 0;
}