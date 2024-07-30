#include<iostream>
#include<string>
using namespace std;

class Employee{
	private: 
		int id;
		string name, surname, gender;
		double salary;
	public:
		void setId(int idNumber){
			id = idNumber;
		}
		void setName(string n){
			name = n;
		}
		void setSurname(string sur){
			surname = sur;
		}
		void setGender(string g){
			gender = g;
		}
		void setSalary(double s){
			salary = s;
		}
		
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		string getSurname(){
			return surname;
		}
		string getGender(){
			return gender;
		}
		double getSalary(){
			return salary;
		}
};

int main(){
	
	int num;
	string name, lastName, gender;
	double salary;
	
	cout << "Enter the number of employee records you want to input: ";
	cin >> num;
	
	Employee employees[num];
	
	for(int i = 0; i < num; i++){
		cout << "\nEnter the name of the " << i + 1 << "th employee: ";
		cin >> name;
		cout << "Enter the surname of the " << i + 1 << "th employee: ";
		cin >> lastName;
		cout << "Enter the gender of the " << i + 1 << "th employee: ";
		cin >> gender;
		cout << "Enter the salary of the " << i + 1 << "th employee: ";
		cin >> salary;
		
		employees[i].setId(i + 1);
		employees[i].setName(name);
		employees[i].setSurname(lastName);
		employees[i].setGender(gender);
		employees[i].setSalary(salary);
	}
	
	cout << "\nEmployees:\n\n";
	
	for(int i = 0; i < num; i++){
		cout << employees[i].getId()<< " " << employees[i].getName() << " " << employees[i].getSurname()<< " " << employees[i].getGender() << " " << employees[i].getSalary() << "\n";
	}
	
	return 0;
}