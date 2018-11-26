#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
// this is a single line comment

/*This is a multiline comment
and is not included in the program provided it is ended
properly*/

// Below are the various data types in c++
    const double PI = 3.145923535;
    
    char my_grade = 'A';
    
    bool am_happy = true;

    int my_age = 45; 
    
    float fav_num = 3.141592;

    double other_fav_num = 1.6180339887;

/* Other types Include:
    short int - 16 bits
    long int - 32 bits
    long long int - 64 bits
    unsigned int - same size as signed version
    long double = not less than regular double
*/
    cout << "Favorite Number is " << fav_num << endl;

    // size of the data types (bits)
    cout << "size of int " << sizeof(my_age) << endl;
    cout << "size of char " << sizeof(my_grade) << endl;
    cout << "size of bool " << sizeof(am_happy) << endl;
    cout << "size of float " << sizeof(fav_num) << endl;
    cout << "size of double " << sizeof(other_fav_num) << endl;

    //test for the largest integer available
    int largest_int = 214748364;
    cout << "Largest Integer " << largest_int << endl;
    
    // Basic Arithmetic Operations in c++
        // + - * / %

    cout << "5 + 2 = " << 5+2 << endl;
    cout << "5 - 2 = " << 5-2 << endl;
    cout << "5 * 2 = " << 5*2 << endl;
    cout << "5 / 2 = " << 5/2 << endl;
    cout << "5 % 2 = " << 5%2 << endl;

// Increment && Decrement
    int five = 5;
    cout << "5++ = " << five++ << endl;
    cout << "++5 = " << ++five << endl;
    cout << "5-- = " << five-- << endl;
    cout << "--5 = " << --five << endl;  

/* Order of operation which states that * and / are goint to
    be performed before + and -
*/
    cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
    cout << "(1 + 2 - 3) * 2 = " << (1 + 2 -3) * 2 << endl;

    // Casting
cout << "4 / 5 = " << 4 / 5 << endl;

/* For you to have your answer in decimal, you have to cast
the data type*/
cout << "4 / 5 = " << (float) 4 / 5 << endl;

// If Statements 
/* This uses comparison operators such as ==, !=, >, <, >=
<=. It also has logical operators such as 
 && (AND), ||(OR), !(NOT).
*/

int age = 50;
int age_at_last_exam = 16;
bool is_not_intoxicated = true;

if((age >= 1) && (age < 16)){
    
    cout << "You can't DRIVE!" << endl;

} else if (!is_not_intoxicated){
    cout << "You can't DRIVE !!" << endl;

} else if(age >= 80 && ((age > 100) || ((age - age_at_last_exam) > 5))){

} else {
    cout << "You know what, you can actually DRIVE!!!" << endl;
}

    // Switch Case statements
       int greeting_option = 1;
       switch(greeting_option){

        case 1: 
            cout << "Bonjour" << endl;
            break;
        
        case 2:
            cout << " Hola" << endl;
            break;
        
        case 3:
            cout << " Ciao" << endl;
            break;
        
        default :
        cout << "Hello" << endl;
}
 
    //Format of a Turnuary Condition
    /* Variable = (Conditon) ? true : false
    */

   int largest_num = (10 > 2) ? 10 : 2;
    cout << largest_num << endl;

    // ARRAYS
     
     int my_fav_nums[5];
     int bad_nums[5] = {4, 12, 21, 20, 18};

     cout << "Bad Number 1: " << bad_nums[0] << endl; 


     // Multi Dimensional Arrays

     char my_name[3][7] = {{'J', 'o', 'e' }, 
                        {'B', 'o', 'l', 'f', 'r', 'e', 'y'}};
        
        cout << "2nd letter in 2nd array: " << my_name[1][1] << endl;
        cout << "1st letter in 2nd array: " << my_name[1][0] << endl;
        cout << "last letter in 2nd array: " << my_name[1][6] << endl;

    // For loops

    for(int i = 1; i<= 10; i++){
        cout << i << endl;
    }

    /* Stacking inner for loops with multi dimensional arrays
    */

   for(int j = 0; j < 2; j++){

       for(int k = 0; k < 7; k++) {

           cout << my_name[j][k];
       }
       cout << endl;
       
     
   }

   // While Loops

    int randNum = (rand() % 100) + 1;

    while(randNum != 100){

    cout << randNum << ",";
    randNum = (rand() % 100) + 1;

    }
    cout << endl;

    int index = 1;
    while( index <= 10){
        cout << index << endl;
        index++;
    }

    // Do While loops

    string number_guessed;
    int int_number_guessed = 0;

    do {
        cout << "Guess a number between 1 and 10: ";
        getline(cin, number_guessed);
        int_number_guessed = stoi(number_guessed);
        cout << int_number_guessed << endl;


    } while(int_number_guessed != 4);
    cout << "You win!" << endl;




    // STRINGS  

    char happy_array[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    string birthday = "Birthday";

    cout << happy_array + birthday << endl;

    string your_name;
    cout << "What is your name? : \n" ;
    getline(cin, your_name);
     cout << "Hello " << your_name << endl;


    double euler_constant = .57721;
    string euler_guess ;
    double euler_guess_double;

        cout << "What is Euler's Constant? \n";
        getline(cin, euler_guess);

    euler_guess_double = stod(euler_guess);

        if(euler_guess_double == euler_constant){

            cout << "You are right!" << endl;
        } else{
            cout << "Thats not right!" << endl;
        }

        cout << "Size of String " << euler_guess.size() << endl;
        cout << "Is string empty?:" << euler_guess.empty() << endl;
        cout << euler_guess.append(" was your guess") << endl;
        
        //String comparison
        string dog = "dog";
        string cat = "cat";
        
        cout << dog.compare(dog) << endl;
        cout << cat.compare(cat) << endl;
        cout << dog.compare(cat) << endl;
        cout << cat.compare(dog) << endl;

      // ASSIGNNING CHARACTERS OR STRINGS  
        string whole_name = your_name.assign(your_name);
            cout << whole_name << endl;

        string first_name = whole_name.assign(whole_name, 0, 3);
            cout << first_name << endl;

  






    return 0;
}