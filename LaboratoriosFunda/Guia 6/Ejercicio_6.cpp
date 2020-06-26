#include "iostream"
#include "string"
#include "stdio.h"
#include "cmath"

using namespace std;

/*
    Ejercicio #6
*/

void contar_ocurrencias(float arreglo[],float num,int cantidad)
{
    float longitud=cantidad;
    float contador=0;
    for (size_t i = 0; i < cantidad; i++)
    {
        if (num==arreglo[i])
        {
            contador++;
        }      
    }
    cout<<"El numero "<<num<<" se repite "<<contador<<" veces dentro del arreglo.."<<endl;
}

int main()
{
    int cantidad;
    float * arr_puntero,numero;
    cout<<"Longitud del arreglo? "<<endl;
    cin>>cantidad;
    arr_puntero = new float[cantidad];
    cout<<"Ingrese los numeros..."<<endl;
    for (size_t i = 0; i < cantidad; i++)
    {
        cin>>arr_puntero[i];
    }
    cout<<"Que numero desea buscar dentro del arreglo? "<<endl;
    cin>>numero;

    contar_ocurrencias(arr_puntero,numero,cantidad);
    

    return 0;
}