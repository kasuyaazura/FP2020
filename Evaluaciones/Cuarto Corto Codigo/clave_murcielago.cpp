#include "iostream"
#include "string"
#include "cctype"
#include "iostream"

using namespace std;

void codificacion(char frase[]){

    string cadena_depurada=frase;
    for (size_t i = 0; i < cadena_depurada.size(); i++)
    {
        if (cadena_depurada[i]=='m')
        {
            cadena_depurada[i]='0';
        }else if(cadena_depurada[i]=='u'){
            cadena_depurada[i]='1';
        }
        else if(cadena_depurada[i]=='r'){
            cadena_depurada[i]='2';
        }
        else if(cadena_depurada[i]=='c'){
            cadena_depurada[i]='3';
        }
        else if(cadena_depurada[i]=='i'){
            cadena_depurada[i]='4';
        }
        else if(cadena_depurada[i]=='e'){
            cadena_depurada[i]='5';
        }
        else if(cadena_depurada[i]=='l'){
            cadena_depurada[i]='6';
        }
        else if(cadena_depurada[i]=='a'){
            cadena_depurada[i]='7';
        }
        else if(cadena_depurada[i]=='g'){
            cadena_depurada[i]='8';
        }else if (cadena_depurada[i]=='o')
        {
            cadena_depurada[i]='9';
        }   
    }
    cout<<"cadena codificada: "<<cadena_depurada<<endl;
}

int main()
{
    char nombre[10000];
    cout<< "Ingrese lo que quiera..."<<endl;
    scanf("%[^\n]",nombre);
    codificacion(nombre);
    return 0;
}