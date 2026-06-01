#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2,x;
    float delta;
    cout << "Inserisci i tre numeri il queale vuoi calcolare il delta: ";
    cin >> a >> b >> c;
    if (a!=0){
        delta = b*b - 4*a*c;
        cout << "Il delta e': " << delta << endl;
    } else {
        cout << "L'equazione non e' di secondo grado." << endl;
    }
    if else(delta>0){
        x1=(-b + sqrt (delta)) / (2*a);
        x2=(-b - sqrt (delta)) / (2*a);
        cout << "Le soluzioni sono reali e distinte: " << x1 << " e " << x2 << endl;
    }
    else if (delta==0){
        x=(-b) / (2*a);
        cout << "Le soluzioni sono reali e coincidenti: " << x << endl;
    }
    else {
        cout << "L'equazione non ha soluzioni reali." << endl;
    }
}