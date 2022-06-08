#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, i;
    long int temp = 1;
    double soma = 0, fat, total = 0;
  
    int term = 1; 

    cout << ">>> Press 15 numbers to the factorial calc <<<" << endl;

    while(term <= 15){
      cout << "Press a number: ";
      cin >> n;
      temp = 1;
      for(i = n; i >= 1; i--){
        temp = temp * i; //fatorial calc
        
      }
      cout << temp << endl;
      total = temp + total; //sum of factorials
      
      term++;
    }
    cout << "Factorial calc total = " << total << endl;

    return 0;
}