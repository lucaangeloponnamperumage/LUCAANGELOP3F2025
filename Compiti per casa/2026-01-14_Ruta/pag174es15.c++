#include <iostream>
using namespace std;

/*
  Programma che legge codice e prezzo di prodotti.
  L'inserimento termina quando il codice è 9.
  Stampa il codice e il prezzo del prodotto più costoso.
 */

int main() {
    int codice, codice_max;
    float prezzo, prezzo_max = 0;


    cout << "Inserisci codice e prezzo del prodotto (9 per terminare): ";
    cin >> codice;

 
    while (codice != 9) {
        cin >> prezzo;

        // Controllo prodotto più costoso
        if (prezzo > prezzo_max) {
            prezzo_max = prezzo;
            codice_max = codice;
        }

        cout << "Inserisci codice e prezzo del prodotto (9 per terminare): ";
        cin >> codice;
    }

    // Output finale
    cout << "Prodotto piu' costoso:" << endl;
    cout << "Codice: " << codice_max << endl;
    cout << "Prezzo: " << prezzo_max << " euro" << endl;

    return 0;
}
