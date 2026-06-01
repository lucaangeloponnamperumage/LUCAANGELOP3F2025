#include <iostream>
using namespace std;

/*
  Programma che legge 4 numeri
  e stampa il più grande.
 */

int main() {
    float numeri[4];
    float massimo;

  
    for (int i = 0; i < 4; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numeri[i];
    }

    // Inizializzo il massimo

    massimo = numeri[0];

    // Ricerca del valore massimo

    for (int i = 1; i < 4; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }

    cout << "Il numero piu' grande e': " << massimo << endl;

    return 0;
}
