#include    "iostream"
#include    "string"

using namespace std;

int main()
{
        string palabra;
        int size,modulo;
        cout<<"Ingrese una palabra"<<endl;
        cin>>palabra;
        size=palabra.size();
        modulo = size%2;
        if (size>10 && modulo ==0)
        {
            cout<<"Palabra de longitud " <<size<<" mayor a 10 con longitud par"<<endl;
        }else if ((size>10) && (modulo !=0))
        {
            cout<<"Palabra de longitud " <<size<<" mayor a 10 con longitud impar"<<endl;
        }else if ((size<10) && (modulo ==0))
        {
            cout<<"Palabra de longitud " <<size<<" menor a 10 con longitud par"<<endl;
        }else if((size<10) && (modulo !=0))
        {
            cout<<"Palabra de longitud " <<size<<" menor a 10 con longitud impar"<<endl;
        }
        

    return 0;
}