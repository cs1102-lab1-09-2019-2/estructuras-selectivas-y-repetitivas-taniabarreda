#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    int N;
    float x1=0,x2=0,y1=0,y2=0,sd;
    cout<<"N : ";
    cin>>N;

    for(int i=0;i<N;i++){
        cout<<"x"<<i+1<<" : ";
        cin>>x1;
        x2=x1;
        x1=pow(x1,2);
        y1=x1+y1;
        y2=x2+y2;
    }

    y1=y1/N;
    y2=y2/N;

    sd=sqrt(y1-pow(y2,2));


    cout<<"sd : "<<setprecision(2)<<fixed<<sd;


}