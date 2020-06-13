#include "iostream"
#include "cmath"
#include "ctime"
#include "cstdlib"
using namespace std;

//funcion que genera el numero random entre 1 y 100
int numero_random()
{
    //ocupe srand y time para que el numero realmente varie cada vez que
    //se ejecute el programa
    int num_rand;
    srand(time(NULL));
    num_rand = rand()% 100+1;
    return num_rand;
}

/*
    Funcion que se encarga de preguntarle al usuario si desea seguir jugando
    y valida la respuesta
*/
bool seguir_jugando()
{
    char opc;
    bool respuesta;
    cout<<"Desea seguir jugando??\ndigite \"Y\" o \"y\" para seguir, cualquier otro caracter para salir: " ;
    cin>>opc;
    if (opc=='Y' || opc=='y'){
        respuesta = true;
    }else if(opc!='Y' || opc!='y'){
        respuesta=false;
    }   
    return respuesta;
}


int main()
{
    int intento=0;
    bool opcion;        
    do{
        int numero_magico = numero_random();
        //Aqui se puede imprimir el numero random para verificar 
        cout<<numero_magico<<endl;
        //Se define el numero de intentos
        int intentos = 5;
    do{
        //empieza el juego
        cout<<"Adivine el numero magico"<<endl;
        cin>>intento;
        if (intento!=numero_magico){
            cout<<"Numero incorrecto"<<endl;
            if (intento>numero_magico){
                cout<<"Tu numero es mayor que el numero magico..."<<endl;
            }else if(intento<numero_magico){
                cout<<"Tu numero es menor que el numero magico..."<<endl;
            }   
        }else if(intento==numero_magico){
            cout<<"\"\"\"\"Felicidades adivinaste el numero magico!!!!!!\n\n"<<endl;
            break;}
        intentos--;
        cout<<"Te quedan "<<intentos<<" intentos...\n"<<endl;
    }while(intentos!=0);
    if(intentos==0)
    cout<<"Perdiste :( !!"<<endl;
        opcion = seguir_jugando();
    }while(opcion==true);
    return 0;
}



