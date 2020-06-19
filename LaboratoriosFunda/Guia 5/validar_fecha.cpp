#include <iostream>
using namespace std;
 
 
bool comprobar_fecha(int a, int m, int d)
{
    int dia_c,mes_c=m,year_c;
    //Array con los dias de cada mes (si el año es bisiesto, sumaremos +1 al febrero)
    int dias_mes[] = {31, 28, 31, 30,31, 30, 31, 31, 30, 31, 30, 31};
 
 
    //comprobamos si el año es bisiesto, si lo es le sumamos uno a febrero
    if(((a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
        dias_mes[1]++;
 
    //comprobamos el mes
    if(m < 1 || m > 12)
        return false;
     
    //comprobamos el dia
    m = m-1;
    if(d <= 0 || d > dias_mes[m])
        return false;
 
    //despues de validar la fecha procedemos a calcular el dia siguiente
    if((d+1)>dias_mes[m])
    {
        d=1;
        if ((mes_c+1)>12)
        {
            mes_c=1;
            a++;
            cout<<"dia: "<<d<<" mes: "<<mes_c<<" year: "<<a<<endl;
        }else
        {
            mes_c++;
            cout<<"dia: "<<d<<" mes: "<<mes_c<<" year: "<<a<<endl;
        }
        
    }else
    {
        d++;
        cout<<"dia: "<<d<<" mes: "<<mes_c<<" year: "<<a;
    }
    
    
    return true;
     
}
 
 
int main(void)
{
        //Testear la funcion con una fecha arbitraria
    bool correcta = comprobar_fecha(2020, 12, 31/*, 20, 00, 00*/);
 
 
    if(correcta){
        cout << "\n\nLa fecha un dia despues" << endl;
    

    }else
        cout << "\n\nLa fecha entrada es invalida" << endl;
 
    return 0;
 
}