#include <iostream>
using namespace std;
int main() {
    int cantidad=-5,precio;
    char seguro;
    bool help=false;
    cout<<"Tipo de Seguro   Máximo de personas   Pago mensual\n";
    cout<<"     A                  8              S/. 40.00\n";
    cout<<"     B                  6              S/. 30.00\n";
    cout<<"     C                  4              S/. 20.00\n";
    cout<<"     D                  2              S/. 10.00\n";
    while(!help){
        cout<<"Tipo de seguro : ";
        cin>>seguro;
        if (seguro=='A'||seguro=='B'||seguro=='C'||seguro=='D')
            help=true;}

    while(cantidad<0){
        cout<<"Cantidad de asegurados : ";
        cin>>cantidad;
    }
    if (seguro=='A')
        if(cantidad!=8)
            precio=40+((cantidad-8)*7);
    if(cantidad==8)
        precio=40;

    if (seguro=='B')
        if(cantidad!=6)
            precio=30+((cantidad-6)*7);
    if(cantidad==6)
        precio=30;

    if (seguro=='C')
        if(cantidad!=4)
            precio=20+((cantidad-4)*3);
    if(cantidad==4)
        precio=20;

    if (seguro=='D')
        if(cantidad!=2)
            precio=10+((cantidad-2)*3);
    if(cantidad==2)
        precio=10;

    cout<<"Monto mensual S/. "<<precio;

}
