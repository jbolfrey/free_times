#include <iostream>
using namespace std;
class Adder {
	public:
		//constructor
		Adder(int i = 0){
			total = i;
		}

		//interface to the outside world
		void add_num(int number){
			total += number;
		}

		//interface to the outside world
		int get_total() {
			return total;
		};

	private:
	//hidden data from the outside world
	int total;
};

int main(){
	Adder a;
	a.add_num(10);
	a.add_num(20);
	a.add_num(30);

	cout << "Total = " <<a.get_total() << endl;

	return 0;
}