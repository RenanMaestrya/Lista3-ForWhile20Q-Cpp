#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double i;
    double p;

    cout << "Enter a base number: ";
    cin >> i;
    cout << "Enter an exponent: ";
    cin >> p;

    for(double n = 0 ;n <= p; n++){
        pow(i,n);   
        cout << i << " elevado a " << n << " = " << pow(i,n) << endl;
    }
}