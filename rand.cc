#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
int main(){
    srand(time(nullptr));

int randNum = (rand() % 100) + 1;

while (randNum != 100){

cout << randNum << ","; 

randNum = (rand() % 100) +1;
}
cout << endl;






return 0;
}
