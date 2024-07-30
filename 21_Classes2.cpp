#include<iostream>
#include<string>
using namespace std;

class Person{
	public: 
	string name, surname;
	
	void PrintScreen(){
		cout << "Person's Name: " << name << "\n";
		cout << "Person's Surname: " << surname << "\n";
	}
};

int main(){
	
	Person obj1;
	
	obj1.name = "Nurettin";
	obj1.surname = "Kaplan";
	
	obj1.PrintScreen();
	
	return 0;
}