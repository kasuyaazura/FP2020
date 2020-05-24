#include    "iostream"
#include    "string"

using namespace std;

int main()
{
        float num;
        cout<<"Ingrese un numero para verificar:"<<endl;
        cin>>num;
        if (num > 0)
        {
            cout<<"el numero, "<<num<<" es positivo"<<endl;
        }else if(num < 0)
        {
            cout<<"el numero, "<<num<<" es negativo"<<endl;
        }else
        {
            cout<<"el numero, "<<num<<" es cero"<<endl;
        }

    return 0;
}