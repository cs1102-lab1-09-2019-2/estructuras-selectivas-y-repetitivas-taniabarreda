#include <iostream>
using namespace std;

int main() {
    int a=0,b=3500,c=0,d=180;
    float pa,a1,a2,j,j1,j2;
    while(a<=200){
        cout<<"Puntos que vale el problema de Alessia =";
        cin>>a;
    }
    while(b>=3500){
        cout<<"Puntos que vale el problema de Jasmin =";
        cin>>b;
    }
    while(c<=0){
        cout<<"Tiempo que le tomo resolver a Alessia =";
        cin>>c;
    }
    while(d>=180){
        cout<<"Tiempo que le tomo resolver a Jasmin =";
        cin>>d;
    }
    a1=((3*a)/10);
    a2=(a-(a/250)*c);
    j1=((3*b)/10);
    j2=(b-(b/250)*d);
    if(a1>a2)
        pa=a1;
    else
        pa=a2;
    if(j1>j2)
        j=j1;
    else
        j=j2;
    if(pa==j)
        cout<<"Empate";
    if(pa>j)
        cout<<"Alessia";
    if(pa<j)
        cout<<"Jasmin";

}

