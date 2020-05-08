#include <iostream>

using namespace std;

int main()
{
    float promedio=0,numero=0;
    
    cout<<"ingrese 3 numeros:\n";
    for (size_t i = 0; i < 3; i++)
    {
        cout<<"\n: ";
        cin >> numero;
        promedio = promedio+numero;
    }
    promedio = promedio/3;
    cout <<"El promedio de los numeros es: ";
    cout << promedio;
    return 0;
}