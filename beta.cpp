#include <iostream>
using namespace std;
int main(){
                int beta[7] = {3, 5};
                for(int i = 2; i < 7; i++){
                    beta[i] = 3 * i + 2;
                    beta[i - 1] = beta[i - 1] + beta[i];

                }
                for (int i = 0; i < 7; i++)
                    cout << beta [i] << " ";
                    cout << endl;

                







    return 0;
}