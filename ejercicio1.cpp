

#include <iostream>
#include<string>
using namespace std;
float calcular_promedio(int n_estudiantes){
  float PC1, PC2, PC3, PC4, Proyecto, E1 ,E2, Promedio ;
  
  do{
    cout<<"Practica 1: ";
    cin>>PC1;
     PC1= PC1*0.05;
  } while (PC1<0||PC1>20);
  

  do{
    cout<<"Practica 2: ";
     cin>>PC2;
     PC2= PC2*0.1;
  } while (PC2<0||PC2>20);


  do{
    cout<<"Practica 3: ";
    cin>>PC3;
    PC3= PC3*0.1;
  } while (PC3<0||PC3>20);


  do{
    cout<<"Practica 4: ";
    cin>>PC4;
    PC4= PC4*0.15;
  } while (PC4<0||PC4>20);


  do{
    cout<<"Proyecto  : ";
    cin>>Proyecto;
    Proyecto= Proyecto*0.2;
  } while (Proyecto<0||Proyecto>20);


  do{
    cout<<"Examen  1 : ";
    cin>>E1;
    E1= E1*0.2;
  } while (E1<0||E1>20);


  do{
    cout<<"Examen  2 : ";
    cin>>E2;
    E2= E2*0.2;
  } while (E2<0||E2>20);
  
  Promedio= PC1+ PC2+ PC3 +PC4+Proyecto+ E1+ E2;
  cout<<"\nSu promedio es "<<Promedio<<"\n";
  return Promedio;

}

string designar_lugar (float prom){
  string lugar;
  if (prom<12){
    lugar="Necesita mejorar";
    cout<<"\n"<<lugar<<"\n\n";
  }
  if (prom<=14.99 and prom>=12){
    lugar="Hackathon Miraflores";
    cout<<"UD asistira al "<<lugar<<"\n\n";
  }
  if (prom<17.99 and prom>=15){
    lugar="Imagine Cup";
    cout<<"UD asistira al "<<lugar<<"\n\n";
  }
  if (prom<=20 and prom>=18){
    lugar="ACM - ICPC International Collegiate Programming Contest";
    cout<<"UD asistira al "<<lugar<<"\n\n";
  }
  return lugar;  
}

int main() {

  int num_alumnos;

    do {
        cout<<"Número de estudiantes:";
        cin>>num_alumnos;
    } while (num_alumnos<=3 || num_alumnos>30);


    int contador=0;
    do {
      cout<<"Alumno numero "<<contador+1<<"\n";
      designar_lugar(calcular_promedio(num_alumnos)); 
      contador++;
    } while (contador<num_alumnos);
    


    return 0;
}
