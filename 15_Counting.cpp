#include <iostream>
using namespace std;

int main(){
	
	int i = 1, num;
	
	cout << "Enter the number up to which you want me to count: ";
	cin >> num;
	
	while(num > 0){
		cout << i << " ";
		i++;
		num--;
	}
	
	return 0;
}