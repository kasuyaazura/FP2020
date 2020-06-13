#include "iostream"
#include "cmath"
#include "ctime"
#include "cstdlib"
using namespace std;
// funcion que determina si un año ingresado es bisiesto o no
bool bisiesto_si_no(int year)
{
    bool si_no;
    if ((year%400)==0){
        si_no = true;
    }else if((year%4==0) && (year%100!=0)){
        si_no = true;
    }else{
        si_no = false;
    }
    return si_no;
}
// funcion que implementa un loop para determinar si el usuario
//quiere seguir probando si otros años son bisiestos
bool seguir_probando()
{
    char opc;
    bool respuesta;
    cout<<"\n\nDesea probar otro año??\ndigite \"Y\" o \"y\" para seguir, cualquier otro caracter para salir: " ;
    cin>>opc;
    if (opc=='Y' || opc=='y'){
        respuesta = true;
    }else if(opc!='Y' || opc!='y'){
        respuesta=false;
    }   
    return respuesta;
}

int main()
{
    int year;
    bool seguir_sino;
    do
    {
        
    bool resp;
    cout<<"\n\nIngrese un año para verificar si es bisiesto a no:"<<endl;
    cin>>year;
    resp = bisiesto_si_no(year);
    if (resp==true)
    {
        cout<<"El año ingresado si es Bisiesto"<<endl;
    }else
    {
        cout<<"El año ingresado no es Bisiesto"<<endl;
    }
    
    seguir_sino = seguir_probando(); 
    }while(seguir_sino==true);



    return 0;
}