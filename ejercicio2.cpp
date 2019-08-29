#include <iostream>
using namespace std;
int main() {
  int lado;
  cin>>lado;
    for (int i=0;i<=lado;i++){
      for(int j=0;j<=lado;j++){
        if (i==0||j==0||i==lado||j==lado)
        cout<<"*";
        else
        cout<<" ";
      }
      cout<<endl;
    }
    return 0;
}
