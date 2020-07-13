#include "iostream"
#include "string"
#include "string.h"
#include "cctype"
#include "iostream"
#include "iomanip"

using namespace std;    

//longitud de la cadena ingresada para el nombre
//del producto
const int Longitud =20;

//Estructura sugerida para el ejercicio
struct costoPorArticulo
{
    char nombre_articulo[Longitud+1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//funcion pequeña para sacar la tabulacion de los nombres con la cantidad
int tabulacion_nombre(char nombre[])
{
    int tabulacion = 0;
    int tamanio=strlen(nombre);
    tabulacion = 30 -tamanio;
    return tabulacion;
}
//funcion pequeña para sacar la tabulacion de la cantidad de productos con el precio unitario
int tabulacion_cantidad(int cantidad){
    //nada mas contamos cuantas cifras tiene el numero
    int tabulacion_c=0,largo=1;
    while(cantidad/10>0)
    {
        cantidad=cantidad/10;
        largo++;
    }
    tabulacion_c= 20 - largo;
    return tabulacion_c;
}
// Funcion para llenar al arreglo de estructuras
void llenar_articulos(costoPorArticulo *puntero_costos,int cantidad_articulos){
    //variable para iterar sobre el arreglo
    int i;
    //variable auxiliar para ingresar los nombres de los productos
    string cadena_ingreso;
        for ( i = 0; i < cantidad_articulos; i++){
        //limpiamos por precaucion 
        cin.ignore(100,'\n');
        cout<<""<<endl;
        cout<< "nombre producto #"<<i+1<<": ";
        getline(cin,cadena_ingreso,'\n');
        strncpy(puntero_costos[i].nombre_articulo,cadena_ingreso.c_str(),Longitud);
        puntero_costos[i].nombre_articulo[Longitud] = '\0';

        cout << "cantidad de articulos: ";
        cin >> puntero_costos[i].cantidad ;
        cout << "Precio unitario: ";
        cin >> puntero_costos[i].precio ;
    }
}

//Funcion que se encarga de calcular el costo total de la compra y la retorna..
float calcular_costo_total(costoPorArticulo *puntero_c, int cantidad_articulos)
{
    float costo_total_productos=0;
    for (size_t x = 0; x < cantidad_articulos; x++)
    {
        costo_total_productos=costo_total_productos+puntero_c[x].costoPorArticulo;
    }
    return costo_total_productos;
}

//Funcion para calcular los costos para la cantidad de productos ingresados y su precio...
void calcular_costos(costoPorArticulo *puntero_costos,int cantidad_articulos)
{
    //variable local para iterar sobre el arreglo
    int k;
    for ( k = 0; k < cantidad_articulos; k++)
      puntero_costos[k].costoPorArticulo = puntero_costos[k].cantidad * puntero_costos[k].precio;  
}

//Funcion para mostrar los articulos al final, con el gosto final...
void mostrar_articulos(costoPorArticulo *puntero_costos, int cantidad_articulos){
    int j;
    int tabulado1,tabulado2;
    cout << "__________________________________________________________________________________"<<endl;
    for ( j = 0; j < cantidad_articulos; j++)
    {
        //mando a llamar a las funciones de tabulacion para que el espaciado quede uniforme
        //dependiendo de los datos que tenga cada estructura dentro del arreglo
        tabulado1 = tabulacion_nombre(puntero_costos[j].nombre_articulo);
        tabulado2 = tabulacion_cantidad(puntero_costos[j].cantidad);
        //Ocupamos las funciones setw y right de la libreria "iomanip" para dar formato a la salida de la consola
        cout << puntero_costos[j].nombre_articulo;
        cout << setw(tabulado1)<<"X";
        cout << puntero_costos[j].cantidad;
        cout <<setw(tabulado2)<<right<<"$";
        cout << puntero_costos[j].precio;
        cout <<"\t\t"<<right<<"subtotal $";
        cout << puntero_costos[j].costoPorArticulo<<endl;
    }
    cout << "__________________________________________________________________________________"<<endl;
}



int main()
{
    //definimos las variables necesarias para ocupar en el programa...
    int cantidad_articulos;
    float costo_total=0;
    string cadena_ingreso;
    costoPorArticulo * puntero_costos;

    cout << "\n"<<endl;
    cout << "Bienvenido, Ingresa porfavor la cantidad de articulos: ";
    cin >> cantidad_articulos;
    //creamos nuestro nuevo arreglo de estructuras "costoPorArticulo"
    puntero_costos = new costoPorArticulo[cantidad_articulos];

    //lamadas a las funciones
    llenar_articulos(puntero_costos,cantidad_articulos);
    calcular_costos(puntero_costos,cantidad_articulos);
    cout<<"\n"<<endl;
    mostrar_articulos(puntero_costos,cantidad_articulos);
    costo_total = calcular_costo_total(puntero_costos,cantidad_articulos);
    cout << "\nTotal: $" <<costo_total<<endl;

    return 0;
}