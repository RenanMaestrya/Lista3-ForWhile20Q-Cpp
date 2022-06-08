#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double temp = 0;
    double n = 1;
    int cont = 0;

    cout << " >>> Sum, average and cout of infinite terms <<< " << endl;
  
    while(n >= 0){
        cout << "Press a number: ";
        cin >> n;
        if(n < 0){
            break;
        }
        temp = n + temp;
        cont++;

        cout << "The sum is equal to: " << temp << endl;
        cout << "The average is equal to: " << temp/cont << endl;
        cout << "Total terms read: " << cont << endl;
        cout << "To finish, press a negative number" << endl;
        cout << endl;
    }
}