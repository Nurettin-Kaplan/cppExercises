#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

	ofstream MyFile("file.txt");
	
	MyFile << "This subject is fun!";
	
	MyFile.close();
	
	ifstream MyReadFile("file.txt");
	
	string myText;
	
	while(getline(MyReadFile, myText)){
		cout << myText;
	}
	
	MyReadFile.close();
	
	return 0;
}