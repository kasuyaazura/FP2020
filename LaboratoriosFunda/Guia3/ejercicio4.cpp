#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        string nombre;
        float precio=0,cantidad=0;
        cout<<"Ingrese nombre, precio y cantidad del producto :"<<endl;
        cout<<"Nombre:\n";
        cin>>nombre;
        cout<<"Precio: "<<endl;
        cin>>precio;
        cout<<"Cantidad: "<<endl;
        cin>>cantidad;

        cout<<"Producto: "<<nombre<<endl;
        cout<<"Cantidad: "<<cantidad<<endl;
        cout<<"Precio: "<<precio<<endl;
        cout<<"Total: $"<<precio*cantidad<<endl;



    return 0;
}