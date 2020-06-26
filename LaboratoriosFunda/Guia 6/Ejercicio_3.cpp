#include "iostream"
#include "string"
#include "stdio.h"
#include "cmath"

using namespace std;

/*
    Ejercicio #3
*/

float incerteza(float datos[],int cantidad)
{
    cout<<"Los datos: "<<endl;
    for (size_t k = 0; k < cantidad; k++)
    {
        cout<<"|"<<datos[k]<<"| ";
    }
    
    float promedio=0,sumatoria=0,incerteza=0,num=cantidad;
    for(int k =0;k<cantidad;k++){
    promedio=promedio+datos[k];
    }
    promedio = promedio/cantidad;
    for (size_t i = 0; i < cantidad; i++)
    {
        sumatoria=sumatoria+pow((datos[i]-promedio),2);
    }

    incerteza = sqrt(((1/(num-1))*sumatoria));
    cout<<"Generan una incerteza de: "<<incerteza<<"%"<<endl;

}

int main()
{
    int cantidad;
    float * datos_puntero;
    cout<< "Que cantidad de datos desea ingresar? "<<endl;
    cin>>cantidad;
    datos_puntero = new float[cantidad];
    cout<< "Ingrese los datos tomados: "<<endl;
    for (size_t i = 0; i < cantidad; i++)
    {
        cout<<"#"<<i+1<<"- ";
        cin>>datos_puntero[i];
    }

    incerteza(datos_puntero,cantidad);
 

}