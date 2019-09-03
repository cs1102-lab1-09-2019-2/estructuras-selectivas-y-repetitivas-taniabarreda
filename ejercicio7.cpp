
#include <iostream>
using namespace std;

int main() {
    int placa=0,a,b,c,d;
    while(placa<11111111||placa>99999999){
        cout<<"Numero de placa :";
        cin>>placa;
    }
    d=placa%10;
    placa=placa-d;
    placa=placa/10;

    c=placa%10;
    placa=placa-c;
    placa=placa/10;

    c=c*10+d;

    if (c%3==0)
        cout<<"AUTORIZADO : Si\n";
    else
        cout<<"AUTORIZADO : No\n";
    b=placa%10;
    placa=placa-b;
    placa=placa/10;
    if (b%2==0)
        cout<<"CITV : vigente\n";
    else
        cout<<"CITV: vencido\n";
    a=placa%10;
    placa=placa-a;
    placa=placa/10;

    if (a%2==0)
        cout<<"SOAT : vigente\n";
    else
        cout<<"SOAT: vencido\n";


}