#include <iostream>
#include <math.h>
using namespace std;
int main()
{

        float pi = 3.14159265;
        float area=0,perimetro=0;
        float radio;
        cout<<"Radio del Circulo:\n";
        cin>>radio;
        area = pi*(pow(radio,2));
        perimetro = pi*2*radio;

        cout<<"El \xA0rea del circulo es:\n";
        cout<<area;
        cout<<"\nEl perimetro del circulo es:\n";
        cout<<perimetro;

    return 0;
}