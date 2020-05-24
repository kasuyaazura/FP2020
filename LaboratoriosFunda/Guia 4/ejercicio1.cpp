#include    "iostream"
#include    "string"

using namespace std;

int main()
{
        int numero1, numero2,residuo;
        cout<<"Ingrese dos numeros."<<endl;
        cout<<"Este numero: ";
        cin>>numero1;
        cout<<"Es divisible entre este?: ";
        cin>>numero2;
        if (numero2==0)
        {   
            while(numero2==0){
            cout<<"El denominador no puede ser cero..\nIngrese otro numero: "<<endl;
            cin>>numero2;
            }
        }
        residuo = numero1%numero2;
        if (residuo==0)
        {
            cout<<"El numero "<<numero1<<" si es divisible entre "<<numero2<<endl;
        }else
        {
            cout<<"El numero "<<numero1<<" no es divisible entre "<<numero2<<endl;
        }
        
    return 0;
}