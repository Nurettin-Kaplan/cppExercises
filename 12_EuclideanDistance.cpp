#include <iostream>
#include <cmath>
using namespace std;

float EuclideanDistance(float x1, float x2, float y1, float y2);

int main(){
	
	float x1, x2, y1, y2;
	
	cout << "Enter the coordinates of the first point (x1 y1): ";
	cin >> x1 >> y1;
	
	cout << "Enter the coordinates of the second point (x2 y2): ";
	cin >> x2 >> y2;
	
	cout << "Euclidean Distance: " << EuclideanDistance(x1, x2, y1, y2) << "\n";
	
	return 0;
}

float EuclideanDistance(float x1, float  x2, float y1, float y2){
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}