#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    double temp = 1;
    double n;
    for(int i = 1; i <= 10; i++){
        if(i % 2 != 0){
            cout << "Odd: " << i << endl;
            temp = 1;
            for(n = i; n >= 1; n--){
              
              temp = temp * n;
              
            }
              cout << "Factorial: " << temp << endl;
          
        };
    }
}