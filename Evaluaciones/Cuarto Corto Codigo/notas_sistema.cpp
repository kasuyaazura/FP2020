#include "iostream"
#include "string"
#include "cctype"
#include "iostream"
#include "cmath"

using namespace std;

float **crear_matriz(int alumnos_filas, int num_notas)
{
    float **puntero_matriz = new float*[alumnos_filas];
    for (int i = 0; i < alumnos_filas; i++)
    {
        puntero_matriz[i] = new float[num_notas];
    }
    return puntero_matriz;
}

void llenar_matriz(float **matriz,int filas,int columnas)
{
     for (int j = 0; j < filas; j++)
    {
        cout<< "notas alumno #"<<j+1<<" \n"; 
        for (int k = 0; k < columnas; k++)
        {
            cin >> matriz[j][k];
        }   
    }
}

float calcular_nota_final(float **matriz,int filas,int columnas,float *notas_finales)
{
    float nota_final=0;
    for (int j = 0; j < filas; j++){
        for (int k = 0; k < columnas; k++){
            nota_final = nota_final+(matriz[j][k]*0.20);
        }
        notas_finales[j]=nota_final;
        nota_final=0;   
    }

    for (int n = 0; n < filas; n++) {
        cout<< "Nota Final alumno #"<<n+1<<": "<<notas_finales[n]<<" ";
        if (notas_finales[n]>=6)
        {
            cout<< "\tAprobado"<<endl;
        }else if (notas_finales[n]<6)
        {
            cout<< "\tReprobado"<<endl;
        }   
    }
}
int main()
{

    
    int alumnos_filas,columnas=5;

    cout << "Ingrese la cantidad de alumnos"<<endl;
    cin >>alumnos_filas;
    float * notas_finales;
    notas_finales = new float[alumnos_filas];
    float **puntero_m;
    puntero_m = crear_matriz(alumnos_filas,columnas);
    llenar_matriz(puntero_m,alumnos_filas,columnas);
    cout<<""<<endl;
    calcular_nota_final(puntero_m,alumnos_filas,columnas,notas_finales);
    
    return 0;
}