#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int dv = 1;
    int d = 1;
    int q;
    int continua;



    while(dv >= d){
        
        cout << "Enter with the dividend: ";
        cin >> dv;
            
        cout << "Enter with the divisor: ";
        cin >> d;

        q = dv / d;
        cout << "There are " << q << " divisors in the dividend" << endl;

        cout << "continue? (1 = yes, 0 = no) ";
        cin >> continua;
        if(continua == 0){
            break;
        }
    }
    return 0;
}