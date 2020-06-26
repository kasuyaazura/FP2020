#include "iostream"
#include "string"
#include "stdio.h"

using namespace std;

/*
    Ejercicio #1
*/

int main(){

                    //declaramos el puntero para que el tamaño sea dinamico
                    int * numeros = NULL;
                    int datos,numero;
                    cout << "Que cantidad de datos desea ingresar? " <<endl;
                    cin >> datos;
                    numeros = new int [datos];
                    for (size_t i = 0; i < datos; i++)
                    {
                        cout << "Ingrese el dato numero " << i+1 <<":"<<endl;
                        cin>>numero;
                        numeros[i]=numero;
                        numero=0;
                    }
                    cout<<"\nDatos: "<<endl;
                    for (size_t j = 0; j < datos; j++)
                    {
                        cout<< numeros[j]<<" ";
                    }

                    //liberamos memoria
                    delete [] numeros;
                    numeros = NULL;
            

    return 0;
}