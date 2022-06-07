#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    int temp = 0;
    while(n < 100){

        if(n < 99){
            cout << n << " + ";
        }else{
            cout << n << " + 100 = ";
        };

        temp = n + temp;
        n = n + 1;

        }

        cout << temp + n;

    return 0;
}
