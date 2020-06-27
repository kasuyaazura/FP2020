#include "iostream"
#include "string"
#include "cctype"
#include "iostream"
#include "cmath"

using namespace std;

float PromedioArreglo(float arreglo[])
{
    float num;
    float promedio=0;
    for(int k =0;k<25;k++){
    promedio=promedio+arreglo[k]; }
    promedio = promedio/25;
    return promedio;
}
void comparar_estaturas(float estaturas[])
{
    float media=PromedioArreglo(estaturas);
    int mayor_a_media=0,menor_a_media=0;
    for (int i = 0; i < 25; i++){
        if (estaturas[i]>media){
            mayor_a_media=mayor_a_media+1;
        }else if(estaturas[i]<media){
            menor_a_media=menor_a_media+1;
        }
    }
    cout << "La media de las 25 estaturas es: "<<media<<endl;
    cout << "La cantidad de estudiantes que se encuentras por encima de la media es: "<<mayor_a_media<<endl;
    cout << "La cantidad de estudiantes que se encuentras por debajo de la media es: "<<menor_a_media<<endl;
}



int main()
{
    int opcion = 0;
    //declaramos el arreglo con las 25 estaturas de los estudiantes
    float estaturas_default[] = {1.58,1.60,1.85,1.70,1.75,1.58,1.68,1.65,1.89,1.88,1.70,
    1.71,1.66,1.54,1.60,1.90,1.63,1.58,1.70,1.79,1.85,1.80,1.63,1.57,1.75};
        cout<< "\nEdades de los alumnos: "<<endl;
        for (size_t i = 0; i < 25; i++)
        {
            cout<<"["<<estaturas_default[i]<<"] ";
        }
        cout<< "\n" <<endl;

                comparar_estaturas(estaturas_default);
                
    return 0;
}





