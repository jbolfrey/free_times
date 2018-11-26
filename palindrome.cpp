#include <iostream>
#include <string>
using namespace std;
int main(){
    string palindrome = "madam";
    bool is_palindrome = true;
    string reverse = "";

    for (int i = palindrome.length() - 1; i >= 0; i--) {
        reverse += palindrome[i];
    }
    
    if (palindrome == reverse) {
        cout<<"Palindrome";
    } else {
        cout<<"NOT Palindrome";
    }

    return 0;
}