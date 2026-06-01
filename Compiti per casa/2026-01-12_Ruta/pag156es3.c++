#include <iostream>
using namespace std;

/*
  Programma che legge 10 numeri
  e stampa il minimo e il massimo.
 */

int main() {
    float numeri[10];
    float minimo, massimo;

 
    for (int i = 0; i < 10; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numeri[i];
    }

    // Inizializzazione
    minimo = massimo = numeri[0];

    // Ricerca minimo e massimo
    for (int i = 1; i < 10; i++) {
        if (numeri[i] < minimo)
            minimo = numeri[i];
        if (numeri[i] > massimo)
            massimo = numeri[i];
    }

    // Output
    cout << "Il numero piu' piccolo e': " << minimo << endl;
    cout << "Il numero piu' grande e': " << massimo << endl;

    return 0;
}
