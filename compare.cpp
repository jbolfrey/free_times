#include <iostream>
#include <string>
using namespace std;
int main(){

	string dog_string = "dog";
	string cat_string = "cat";

		cout << dog_string.compare(cat_string) << endl;
		cout << cat_string.compare(dog_string) << endl;
		cout << dog_string.compare(dog_string) << endl;
		cout << cat_string.compare(cat_string) << endl;



	return 0;	
}