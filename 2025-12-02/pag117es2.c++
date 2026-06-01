#include <iostream>
using namespace std;

/*
    Programma: Ordinamento di due numeri
    Obiettivo: leggere due numeri e stamparli in ordine crescente.
*/

int main(){
    float a,b;
    cout << "Inserisci i due numeri da ordinare: ";
    cin >> a >> b;

       // Ordinamento crescente
       
    if(a < b){
        cout << "I numeri in ordine crescente sono: " << a << " " << b << endl;
    } else {
        cout << "I numeri in ordine crescente sono: " << b << " " << a << endl;
    }
}