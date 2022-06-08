#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int dv = 1;
    int d = 1;
    bool continua = true;
    int cont;



    while(continua == true){
        int q = 1;
        cout << "Enter with the dividend: ";
        cin >> dv;
            
        cout << "Enter with the divisor: ";
        cin >> d;

        while((q*d) < dv){
            
            q++;

        }
        
        cout << "There are " << q << " divisors in the dividend" << endl;
        
        cout << "continue? (1 = yes, 0 = no) ";
        cin >> cont;
        while(cont != 0 && cont != 1){
            cout << "Invalid option" << endl;
            cout << "continue? (1 = yes, 0 = no) ";
            cin >> cont;
            if (cont == 0 || cont == 1){
                cont = cont;
            }
        }

        if(cont == 0){
            continua = false;
        }else if(cont == 1){
            continua = true;
        }
        
    }
    return 0;
}