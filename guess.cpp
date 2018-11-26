#include <iostream>
using namespace std;
int main(){
			string guessed_number;
			int number_guessed = 0;

		do{
			cout << "I hold a number at thought..." << endl;
			cout << "can you guess the number!?" << endl;
			cout << "The number is between 1 and 10: ";

			getline(cin, guessed_number);

			number_guessed =stoi(guessed_number);

			cout << guessed_number << endl;


		} while(number_guessed != 8);
			cout << " Hey!, You actually guessed my number!!" << endl;

return 0;
}	
