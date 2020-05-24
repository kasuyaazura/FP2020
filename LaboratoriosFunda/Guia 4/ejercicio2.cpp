#include    "iostream"
#include    "string"

using namespace std;

int main()
{
        int numparimp,modu;
        cout<<"Verificar si un numero es par o impar"<<endl;
        cout<<"ingrese un numero para verificarlo:"<<endl;
        cin>>numparimp;
        modu = numparimp%2;
        if (modu==0)
        {
            cout<<"el numero, "<<numparimp<<" es par"<<endl;
        }else
        {
            cout<<"el numero, "<<numparimp<<" es impar"<<endl;
        }

    return 0;
}