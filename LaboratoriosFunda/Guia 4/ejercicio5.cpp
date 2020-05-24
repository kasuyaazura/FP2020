#include    "iostream"
#include    "string"

using namespace std;

int main()
{
    string palabra;
        char inicio,final;
        cout<<"Ingrese una palabra: "<<endl;
        cin>>palabra;
        inicio = palabra.front();
        final = palabra.back();
        if (inicio==final)
        {
            cout<<"La palabra \""<<palabra<<"\" inicia y termina con la misma letra"<<endl;
        }else
        {
            cout<<"La palabra \""<<palabra<<"\" inicia y termina con diferente letra"<<endl;
        }

    return 0;
}