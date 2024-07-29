#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	
	int num, guess;
	string answer;
	
	srand(time(NULL));
	num = 1 + rand() % 100;
	
	do{
		cout << "I have thought of a number between 0 and 100.\n";
	
		cout << "Enter your guess: ";
		cin >> guess;
		
		if(guess == num){
			cout << "You guessed it! The number I had in mind was " << num << ".\n";
			return 1; 
		}
		else if(guess > num){
			cout << "Lower :).\n"; 
		}
		else if(guess < num){
			cout << "Upper :).\n";
		}
		
		while(guess != num){
			cout << "Enter your guess again: ";
			cin >> guess;
			if(guess == num){
				cout << "You guessed it! The number I had in mind was " << num << ".\n";
			}
			else if(guess > num){
				cout << "Lower :).\n"; 
			}
			else if(guess < num){
				cout << "Upper :).\n";
			}
		}
		
		cout << "Do you want to play again (Yes or No): ";
		cin >> answer;
		
	}while(answer.compare("No") != 0 || answer.compare("no") != 0);
	
	return 0;
}