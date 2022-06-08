#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int term = 1;
    int n;
    int soma = 0;
    float media;
    
    cout << " >>> Enter 10 numbers to calc their sum and average <<< " << endl;

    while(term <= 10){
        cout << "Press a number: ";
        cin >> n;
            
        soma = n + soma;

        term++;
        }
        cout << "The sum is equal to: " << soma << endl;
        cout << "The average is equal to: " << soma/10 << endl;

  return 0;
    
}