#include <iostream>
using namespace std;
int main(){
	int total_even = 0;
	int sum = 0;
	int first = 1;
	int second = 2;

	while( sum <= 200000){
		sum = first + second;
		first = second;
		second = sum;

	if(sum % 2 == 0){

		total_even += sum;
	}
	}
		cout << "The results is " << total_even << endl;




















	return 0;
}