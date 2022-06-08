#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int soma = 0;
    for(int i = 50; i <= 70; i++){
        if(i % 2 == 0){
            cout << "Pair: " << i << endl;
            soma = soma + i;
        }
    }
        cout << " " << endl;
        cout << "Sum: " << soma << endl;
        cout << "Average: " << soma/11 << endl;

    return 0;
}