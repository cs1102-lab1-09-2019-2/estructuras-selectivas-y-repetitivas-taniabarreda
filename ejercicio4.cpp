#include <iostream>
using namespace std;
int main() {
    int opcion=5;
    float precio;
    char claro;
    bool help=false;
    cout<<"Tipo de entrada\n";
    cout<<"1.Super Vip     precio 212\n";
    cout<<"2.Vip           precio 170\n";
    cout<<"3.Preferencial  precio 136\n";
    cout<<"4.General       precio 59\n";
    while(opcion>4){
        cout<<"Selecione tipo de entrada: ";
        cin>>opcion;
    }
    if (opcion==1)
        precio=212;

    if (opcion==2)
        precio=170;

    if (opcion==3)
        precio=136;

    if (opcion==4)
        precio=59;
    while (!help){
        cout<<"Es cliente de Claro <S,s,N,n> : ";
        cin>>claro;
        if (claro=='S'||claro=='s'||claro=='N'||claro=='n')
            help=true;
    }

    if (claro=='S'||claro=='s')
        precio=(precio*80)/100;


    cout<<"Monto a pagar "<<precio;

}
