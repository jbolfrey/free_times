#include <iostream>
#include <string>
using namespace std;
int main(){
    string palindrome ;
    bool is_palindrome = true;
    string reverse = "";
    cout << "Please enter any word: " << endl;
    getline(cin, palindrome);

    for (int i = palindrome.length() - 1; i >= 0; i--) {
        reverse += palindrome[i];
    }
    
    if (palindrome == reverse) {
        cout << palindrome << " is a Palindrome \n" ;
    } else {
        cout << palindrome << " is not a Palindrome \n";
    }

    return 0;
}