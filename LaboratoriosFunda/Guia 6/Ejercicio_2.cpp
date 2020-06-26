#include "iostream"
#include "string"
#include "stdio.h"

using namespace std;

/*
    Ejercicio #2
*/

float PromedioArreglo(float arreglo[],int longitud)
{
    float num;
    float promedio=0;
    for (size_t i = 0; i < longitud; i++)
    {
        cout <<"Ingrese el dato #"<<i+1<<endl;
        cin>>num;
        arreglo[i]=num;
        num=0;
    }
    for(int k =0;k<longitud;k++){

    //calculamos el priedio del arreglo cuando iteramos sobre el mismo arreglo
    promedio=promedio+arreglo[k];
    
    }
    promedio = promedio/longitud;
    return promedio;
}

int main()
{
    //creamos el puntero
     float * num_promedio = NULL;
                    int cantidad;
                    float promedio;
                    cout << "Que cantidad de datos desea ingresar? " <<endl;
                    cin >> cantidad;
                    num_promedio = new float[cantidad];
                    promedio = PromedioArreglo(num_promedio,cantidad);
                    cout<< "El promedio de los datos ingresados es: "<<promedio;

                    //liberamos la memoria..
                    delete [] num_promedio;
                    num_promedio = NULL;
    return 0;
}