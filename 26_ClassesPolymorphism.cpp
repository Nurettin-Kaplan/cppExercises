#include<iostream>
#include<string>
using namespace std;

class Animal{
	public:
		void Sound(){
			cout << "Animal Sound\n";
		}
	
};

class Dog : public Animal{
	public:
		void Run();
		void Sound(){
			cout << "Hav Hav\n";
		}
};

class Cat : public Animal{
	public: 
		void Run();
		void Sound(){
			cout << "Miav Miav\n";
		}
};

int main(){
	
	Animal myAnimal;
	Dog myDog;
	Cat myCat;
	
	myAnimal.Sound();
	myDog.Sound();
	myCat.Sound();
	
	return 0;
}