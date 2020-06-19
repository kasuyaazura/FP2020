#include    "iostream"
#include    "string"

using namespace std;

void validar_hora(int hh, int mm, int ss)
{
    //Primero validamos que la hora que nos ha ingresado sea valido
    if(ss>59 || mm > 59 || hh >23){
        cout<< "Formato de fecha invalido.." <<endl;
        
    //procedemos despues a calcular la hora un segundo despues
    }else if((ss+1)>59)
    {
        //primero si el segundo ingresado+1 es mayor que 59, tenemos que reiniciarlo a 0
        ss=0;
        mm=mm+1;
        if(mm>59 && ss==0){
            /*despues de reiniciar los segundos comprobamos que si al sumarle a los minutos
            es mayor que 59, tenemos que reiniciar los minutos tambien y sumar a las horas 1
            */
            ss=0;
            mm=0;
            hh=hh+1;
                if(hh>23 && mm==0 && ss==0){
                    ss=0;
                    mm=0;
                    hh=0;
                    /*
                    por ultimo si las horas al sumarle 1 es mayor a 23 es porque son las 00 horas.
                    */
                    cout<< "Hora un segundo despues: hh: "<< hh <<" mm: "<< mm <<" ss: "<< ss <<endl;
                    
                
                            }else
                            {
                                ss=0;
                                mm=0;
                                hh=hh;
                                cout<< "Hora un segundo despues: hh: "<< hh <<" mm: "<< mm <<" ss: "<< ss <<endl;
                            }
                 }else{
                        ss=0;
                        mm=mm;
                        cout<< "Hora un segundo despues: hh: "<< hh <<" mm: "<< mm <<" ss: "<< ss <<endl;
                        
                        }

    }else{
    ss=ss+1;
    cout<< "Hora un segundo despues: hh: "<< hh <<" mm: "<< mm <<" ss: "<< ss <<endl;
    cout<< "Solo sumo segundos" <<endl;
    }
}

int main()
{
    /*
    cout<< "" <<endl;
    cin>> ;
    */
    validar_hora(12,59,59);


}