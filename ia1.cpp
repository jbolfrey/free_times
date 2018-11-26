#include <iostream>
#include <string>
using namespace std;
int main(){
	string employee_name;
	int employee_id;
	int working_hours;
	double net_salary;
	int overtime;
		cout << "Welcome to the pay-slip printing system. " << endl;
		
		cout << "Please Enter your name: ";
		getline(cin, employee_name);

		cout << "Please Enter your ID number: ";
		cin >> employee_id ;

		cout << "Please Enter your number of working hours for the month: ";
		cin >> working_hours;

		if( working_hours <= 80){
			net_salary = working_hours * 10.50;
			break;

		} 
		else if( working_hours > 80){
			overtime = (working_hours - 80) * 12;
			net_salary = overtime + net_salary;

		}else{
			cout << "Please Enter a valid number of working hours." << endl;
		}

			cout <<"Employee Name: " << employee_name << endl;
			cout << "Employee ID: " << employee_id << endl;
			cout << "Number of Working hours: " << working_hours << endl;
			cout << "Your Net Salary for the month is GHC " << net_salary << endl;








	return 0;
}