#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    int age;
    float salary;
    cout << "Please Enter your name" << endl;
        cin >> name ;
    cout << "You said your name is " << name << "!" << endl;

    cout << "Please Enter your Age: " << endl;
        cin >> age ;
    cout << "So you're " << age  <<  " years old!" << endl;
    
    cout << "Thank you for using our service!!" << endl;
    return 0;
}
