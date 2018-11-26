#include <iostream>
#include <ctime>
using namespace std;
int main(){
			string number_guessed;
			int int_number_guessed;
			string guess_again;
			int another_guess;
		srand(time(nullptr));
	do{

		cout << "I have a number in my head." << endl;
		cout << "Can you guess the number!?" << endl;
		cout << "The number is between 1 and 10: ";

		getline(cin, number_guessed);
		int_number_guessed = stoi(number_guessed);

		cout << int_number_guessed << endl;

	} while(int_number_guessed != 7);
		cout << "You guessed my number!"<< endl;


	do{
		cout << "the second number is between 10 and 20: ";

		getline(cin, guess_again);
		another_guess = stoi(guess_again);

		cout << another_guess << endl;

	}	while(another_guess!= 16);

			cout << "You guessed it again...!" << endl;


	return 0;
}