#include <iostream>
using namespace std;
int main()
{
    int soma = 0;
    for(int i = 1; i <= 500; i++){
        if(i % 2 == 0){
            if(i < 500){
                cout << i << " + ";
            }else{
                cout << i << " = ";
            };
            soma = soma + i;
        };
    };
    cout << soma ;
}