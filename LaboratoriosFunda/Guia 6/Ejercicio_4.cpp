#include "iostream"
#include "string"
#include "stdio.h"

using namespace std;

/*
    Ejercicio #4
*/


void leer_llenar_arreglo(float arreglo[],int longitud)
{
    for (size_t i = 0; i < longitud; i++)
    {
        cout<< "Ingrese los elementos del arreglo"<<endl;
        cin>>arreglo[i];
    }
}

void sumar_arreglos(float arreglo1[],float arreglo2[],int longitud,float resultante[])
{
    for (size_t i = 0; i < longitud; i++)
    {
        resultante[i]=arreglo1[i]+arreglo2[i];
    }
}

void desplegar_resultado(float resultante[],int longitud)
{
    cout<< "Arreglo resultante: "<<endl;
    for (size_t i = 0; i < longitud; i++)
    {
        cout<<"["<<resultante[i]<<"] ";
    }
    
}

int main()
{
    float * arr_1 = NULL;
    float * arr_2 = NULL;
    float * arr_resultante = NULL;
    int tam_1,tam_2;
    do{
    cout << "Ingrese la cantidad de elementos del arreglo 1: " <<endl;
    cin >> tam_1;
    cout << "Ingrese la cantidad de elementos del arreglo 2: " <<endl;
    cin >> tam_2;
    if (tam_1!=tam_2)
    {
        cout << "Las longitudes de los arreglos no coiciden..\n"<<endl;
    }
    }while(tam_1!=tam_2);
    arr_1 = new float[tam_1];
    arr_2 = new float[tam_2];
    arr_resultante = new float[tam_1];
    cout << "Llenando primer arrego..."<<endl;
    leer_llenar_arreglo(arr_1,tam_1);
    cout << "Llenando segundo arrego..."<<endl;
    leer_llenar_arreglo(arr_2,tam_2);

    sumar_arreglos(arr_1,arr_2,tam_1,arr_resultante);
    desplegar_resultado(arr_resultante,tam_1);




    return 0;
}