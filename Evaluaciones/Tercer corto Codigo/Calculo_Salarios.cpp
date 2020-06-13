#include "iostream"
#include "cmath"

using namespace std;

//Programa para el calculo de salarios

/*funcion para calcular el salario total del empleado
    aqui se calcula el salario total sin descuentos para despues 
    pasarlo a una funcion que calcule los descuentos
*/
float SalarioTotal( float horas, float horas_extra)
{
    float s_total = (horas * 1.75) + (horas_extra * 2.50);
    return s_total;
}

/*
    Funcion que recibe como parametro el salario total
    y en base al salario total del empleado calcula los descuentos y los aplica
    retornando el salario real, los descuentos se aplican en base al salrio total del empleado
    si es mayor o no a 500
*/
float SalarioConDescuentos(float s_total_emp)
{
     float ISSS,AFP,Renta,s_real_emp;
    if (s_total_emp>500)
    {
        ISSS = s_total_emp*0.04;
        AFP = s_total_emp*0.0625;
        Renta = s_total_emp*0.10;
        s_real_emp = s_total_emp - ISSS - AFP - Renta;

    }else
    {
        ISSS = s_total_emp*0.04;
        AFP = s_total_emp*0.0625;
        s_real_emp = s_total_emp - ISSS - AFP;
    }
    
    return s_real_emp;
}
/*
    Funcion que se encarga de calcular los salarios de la cantidad de trabajadores ingresados
*/
void CalculoSalarios(int num_emp)
{
for (size_t i = 0; i < num_emp; i++)
    {
        float h_tranbajo=0, h_extra=0;
        cout<<"\nEmpleado "<<i+1<<":"<<endl;
        cout<<"Horas de trabajo regulares:"<<endl;
        cin>>h_tranbajo;
        cout<<"Horas Extra laboradas:"<<endl;
        cin>>h_extra;
        cout<<"Salalario total: $"<<SalarioTotal(h_tranbajo,h_extra)<<endl;
        cout<<"Salalario real: $"<<SalarioConDescuentos(SalarioTotal(h_tranbajo,h_extra))<<endl;

    }
}


int main(){

    int num_empleados;
    cout<<"Programa para calcular el salario de N empleados."<<endl;
    cout<<"De cuantos empleados desea calcular el salario?"<<endl;
    cin>>num_empleados;
    CalculoSalarios(num_empleados);

    return 0;
}