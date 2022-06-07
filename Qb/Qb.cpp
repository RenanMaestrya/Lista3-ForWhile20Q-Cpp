#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}