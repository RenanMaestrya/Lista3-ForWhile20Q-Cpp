#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, aux = 3, temp;
    double f1 = 0;
    double f2 = 1;

    cout << f1 << endl; // 0 ->  primeiro termo

    while(aux <= 15){
        cout << (f1 + f2) << endl;     // f1 + f2 -> segundo termo

        temp = f2;            // temporario recebe f2
        f2 = f1;             // f2 recebe f1
        f1 = f1 + temp;     // f1 recebe f1 + temporario

        aux++;            
    }

    return 0;
}