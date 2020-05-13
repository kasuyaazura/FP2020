#include <iostream>
#include <math.h>

using namespace std;
int main()
{

    float a,b,c,aux1,aux2;
        float raiz1=0,raiz2=0;
        cout<<"Ingrese los terminos \"a\" \"b\" y \"c\""<<endl;
        cout<<"a"<<endl;
        cin>>a;
        if (a==0)
        {
            cout<<"valor no valido para a"<<endl;
            return 0;
        }else
        {
        
        cout<<"b:"<<endl;
        cin>>b;
        cout<<"c:"<<endl;
        cin>>c;
        aux1 = (-1)*(b);
        aux2 = sqrt(pow(b,2)-(4*a*c));
        raiz1 = (aux1+aux2)/(2*a);
        raiz2 = (aux1-aux2)/(2*a);
        
         
        cout<<"X1:\t";
        cout<<raiz1 <<endl;
        cout<<"X2:\t";
        cout<<raiz2 <<endl;
        }
    return 0;
}