#include <iostream>
#include <cmath>
using namespace std;

class CSCD205Clock {
        private :
        int hour;    
        int minute;
        int second;


        public:

        void setTime(int h, int m, int s);

        string getTime();
        string recordtime();

};



void CSCD205Clock :: setTime(int h, int m, int s){

        hour = h ;
        minute = m;
        second = s;

}

        string CSCD205Clock :: getTime(){

                return hour <<":"<< minute ":" << second << endl;

}
