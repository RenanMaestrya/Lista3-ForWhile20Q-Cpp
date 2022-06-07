#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int c = 1;
  while(c < 200){
    if(c % 4 == 0){
      cout << c << endl;
    };
    c = c+1;
  };  
};