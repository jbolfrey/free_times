#include <iostream>
using namespace std;
int main(){
string employee_first_name;
string employee_last_name;
string employee_name;
string employee_ID;
int worked_hours;
double salary;
		
		cout << "Welcome to the Payment service" << endl;
		
		cout << "Please Enter Your First Name" << endl;
			cin >> employee_first_name;
 
		cout << "Please Enter Your Last Name: " << endl;
			cin >> employee_last_name;

		cout << "Please Enter Your ID NUmber" << endl;
			cin >> employee_ID;
		
		cout << "Please Enter your Work Hours" << endl;
			cin >> worked_hours;
		

		employee_name = employee_first_name + employee_last_name;


		if ( worked_hours <= 80) {
			salary = worked_hours * 10.5;
}
		else{
			salary = (worked_hours - 80) * 12;
			salary += 80 * 10.5;
}

		cout << "Employee Name: " << employee_name << endl;
	
		cout << "Employee ID: " << employee_ID << endl;

		cout << "Working Hours: " << worked_hours << endl;

		cout << " Salary:GHc " << salary << endl;
return 0;
}
