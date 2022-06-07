#include <iostream>
using namespace std;
int main()
{
    float f, c;
    for(c = 10; c <= 100; c += 10){
        f = (9 * c) / 5 + 32;
        cout << c << "C = " << f << "F" << endl;
    }
    return 0;
}