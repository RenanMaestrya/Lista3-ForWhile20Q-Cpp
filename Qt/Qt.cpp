#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int init = 15;
    while (init <= 200)
    {
        cout << pow(init,2) << endl;
        init += 3;
    }
    
    return 0;
}