#include    "iostream"
#include    "string"

using namespace std;

void euclides_mcd(int num_up, int num_down)
{
    int residuo;
    do
    {
    residuo = num_up%num_down;
    if (residuo != 0)
    {
        num_up = num_down;
        num_down = residuo;
    }
    }while(residuo != 0);

    cout<< "El MCD es: " << num_down <<endl;

}

int main()
{   
    int a,b;
    cout<<"Ingrese dos numeros para calcular su MCD: "<<endl;
    cout<<"Numero mayor: "<<endl;
    cin>>a;
    cout<<"Numero mayor: "<<endl;
    cin>>b;
    euclides_mcd(a,b);
    return 0;
}