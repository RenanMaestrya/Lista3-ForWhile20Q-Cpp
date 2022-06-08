#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float base, altura, area, areaCasa;
    string comodo, yn;
    bool continua = true;

    
    cout << ">>> Enter the name, height and width to calculate the area of the room <<<" << endl;

    while(continua){
        cout << "Enter the name of the room: ";
        cin >> comodo;
        cout << "Enter the height of the room: ";
        cin >> altura;
        cout << "Enter the width of the room: ";
        cin >> base;
        area = base * altura;
        cout << "The area of the room " << comodo << " is: " << area << "m²"<< endl;

        cout << "continue? (y/n): ";
        cin >> yn;
        if(yn == "n" || yn == "N" || yn == "nao" || yn == "Nao" || yn == "NÃO" || yn == "no" || yn == "No"){
            continua = false;
        }
        
        areaCasa = areaCasa + area;
    }
        cout << "The total area of the house is: " << areaCasa << "m²" << endl;

    return 0;
}