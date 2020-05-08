#include <iostream>
#include <math.h>
using namespace std;
int main()
{

        string nombre;
        float precio=0,cantidad=0;
        cout<<"Ingrese nombre, precio y cantidad del producto :"<<endl;
        cout<<"Nombre: "<<endl;
        cin>>nombre;
        cout<<"Precio: "<<endl;
        cin>>precio;
        cout<<"Cantidad: "<<endl;
        cin>>cantidad;

        cout<<"Cantidad\tProducto\t\tPrecio"<<endl;
        cout<<cantidad<<"\t\t"<<nombre<<"\t\t"<<precio<<endl;
        cout<<"======================================="<<endl;
        cout<<"\t\t\t\tTotal: $"<< precio*cantidad<<endl;
    return 0;
}