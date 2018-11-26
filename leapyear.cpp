#include <iostream>
using namespace std;
int main(){
			int year;
			cout << "Please enter a valid year: " << endl;

			cin >> year;


		if(year % 4 == 0){
			cout << year << " is a leap year" << endl;
		} else {
			cout << year << " is not a leap year" << endl;
		}





	return 0;
}