#include <iostream>
using namespace std;

/*
  Programma che legge peso e altezza di N persone
  e conta quante superano un valore di riferimento K.
 */

int main() {
    int n_persone;
    float peso, altezza, k;
    int cont_peso = 0, cont_altezza = 0;

   
    cout << "Inserisci il numero di persone: ";
    cin >> n_persone;
    cout << "Inserisci il numero di riferimento (k): ";
    cin >> k;

    // Lettura dati e confronti
    for (int i = 0; i < n_persone; i++) {
        cout << "Inserisci peso e altezza della persona " << i + 1 << ": ";
        cin >> peso >> altezza;

        if (peso > k)
            cont_peso++;

        if (altezza > k)
            cont_altezza++;
    }

    cout << "Numero di persone con peso maggiore di " << k << ": "
         << cont_peso << endl;
    cout << "Numero di persone con altezza maggiore di " << k << ": "
         << cont_altezza << endl;

    return 0;
}
