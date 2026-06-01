#include <iostream>
using namespace std;
 
  float triangolo( float a, float b){
    float area;
    area=(a*b)/2;
    return area;
  }
   float quadrato( float a){
    float area;
    area=(a*a);
    return area;
   }
   float rettangolo( float a, float b){
    float area;
    area=a*b;
    return area;
   }
   float rombo( float a , float b){
    float area;
    area=(a*b)/2;
    return area;
   }

int main(){
     int scelta=0;
     float base,altezza;
    cout<<"Di quale figura vuoi trovare l' area?\n";  
    cout<<"Inserisci 1=Triangolo, 2=Quadrato, 3=Rettangolo, 4=Rombo, 5=Uscita\n";
    cin>>scelta;
    if(scelta<1){
        cout<<"Scelta non valida";
        return 0;
    }
    else if(scelta>5){
        cout<<"Scelta non valida";
        return 0;
    }
    switch (scelta){
        case 1:
        cout<<"Inserisci la base e l'altezza\n";
        cin>>base;
        cin>>altezza;
        cout<<"L' area del triangolo è: " << triangolo(base, altezza) ;
        break;

        case 2:
        cout<<"Inserisci il lato\n";
        cin>>base;
        cout<<"L' area del quadrato è: " << quadrato(base) ;
        break; 

        case 3:
        cout<<"Inserisci la base e l'altezza\n";
        cin>>base;
        cin>>altezza;
        cout<<"L' area del rettangolo è: " << rettangolo(base, altezza) ;
        break;
        case 4:
        cout<<"Inserisci le diagonali\n";
        cin>>base;
        cin>>altezza;
        cout<<"L' area del rombo è: " << rombo(base, altezza) ;
        break;
        case 5:
        cout<<"Uscita in corso..."; 
        break;
        default:
        cout<<"Scelta non valida";

    }

}