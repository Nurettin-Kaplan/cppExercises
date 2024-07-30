#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Sphere{
	public:
		double radius;
	
	void SphereArea(){
		cout << "Area of the sphere: " << 4 * M_PI * pow(radius,2) << " m2\n";
	}
	void SphereVolume(){
		cout << "Volume of the sphere: " << (4.0/3.0) * M_PI * pow(radius,3) << " m3\n";
	}
};

int main(){

	double value;
	Sphere obj1;
	
	cout << "Enter the radius of the sphere (m): ";
	cin >> value;
	
	obj1.radius = value;
	
	obj1.SphereArea();
	obj1.SphereVolume();
	
	return 0;
}