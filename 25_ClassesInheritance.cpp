#include<iostream>
#include<string>
using namespace std;

class Animal{
	private:
		string color;
		string habitat;
		string sound;
		string species;

	public:
		void Eat();
		void Sleep();
		void Hunting();
		void Sound();
		
		void setColor(string c){
			color = c;
		}
		void setHabitat(string h){ 
			habitat = h;
		}
		void setSound(string s){ 
			sound = s;
		}
		void setSpecies(string s){ 
			species = s;
		}
		
		string getColor(){ 
			return color;
		}
		string getHabitat(){ 
			return habitat;
		}
		string getSound(){ 
			return sound;
		}
		string getSpecies(){ 
			return species;
		}
};

void Animal::Eat(){
	cout << "... ...\n";
}

void Animal::Sleep(){
	cout << "zZz zZz zZz\n";
}

void Animal::Hunting(){
	cout << "(breath) (breath)\n";
}

void Animal::Sound(){
	cout << sound << "\n";
}

class Dog : public Animal{
	//
};

int main(){
	
	Dog myDog;
	myDog.setColor("Black");
	myDog.setHabitat("Earth");
	myDog.setSound("Hav Hav");
	myDog.setSpecies("Mammals");
	
	myDog.Sleep();
	myDog.Sound();
	
	return 0;
}