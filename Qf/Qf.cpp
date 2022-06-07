#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int c = 1;
  while(c < 200){
    if(c % 4 == 0){   // se o resto da divisão por 4 for 0
      cout << c << endl; // imprime o número
    };
    c = c+1;
  };  
};