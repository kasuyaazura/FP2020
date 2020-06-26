#include "iostream"
#include "string"
#include "stdio.h"
#include "cmath"

using namespace std;

/*
    Ejercicio #5
*/

int contar_impares(int a){
    int variable=1,impares=0,contador=0;
    int * array_puntero = NULL;
    array_puntero = new int[a]; 
    do{

        if (variable%2!=0){
            impares=impares+1;
            array_puntero[contador]=variable;
            contador=contador+1;
        }
        variable++;
    }while(impares!=a);

    for (int i = a; i > 0; i--)
    {
        cout<<"#"<<101-i<<"-"<<array_puntero[i-1]<<endl;
    }
    return impares;
}


int main()
{
    //a la funcion le pasamos como parametro la cantidad de impares que deseemos que se desplieguen
    //esto a su vez sera el tamaño del arreglo
    contar_impares(100);

    return 0;
}