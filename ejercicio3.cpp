#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,a,m=0;
    vector<int>mayor;

    cout<<"Cantidad de numeros a ingresar: ";
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a;
        mayor.push_back(a);
    }

    for (int j=0;j<n;j++){
        if (mayor[j]>m)
            m=mayor[j];
    }

    cout<<"El valor maximo es: "<<m;
}