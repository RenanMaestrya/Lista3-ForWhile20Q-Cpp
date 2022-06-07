#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i =0, n = 1, soma = 0;
    
    for(i = 0; i <= 63; i++){
        
        n = pow(2,i);
        
        soma = + n;
    
    }
    cout<<"Soma total de todos os grãos em cada quadro: " << soma;
    
    return 0;
}