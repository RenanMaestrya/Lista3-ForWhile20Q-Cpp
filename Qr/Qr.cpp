#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int b, s;
    int n = 0;
    bool inicioleitura = true;
    while(n >= 0){
        cout << "Enter a positive number: ";
        cin >> n;
        
        if(inicioleitura == true){
            b = n;
            s = n;
            inicioleitura = false;
        }
        if(n >= 0){
            if(n > b){
                b = n;
            }
            if(n < s){
                s = n;
            }
        }
    

    }

    cout << "the biggest number is: " << b << endl;
    cout << "the smallest number is: " << s << endl;
    return 0;
}