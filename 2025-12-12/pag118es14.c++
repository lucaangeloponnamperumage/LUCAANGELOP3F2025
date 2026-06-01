#include <iostream>
using namespace std;

/*
  Programma che calcola il costo del parcheggio
  in base alla durata della sosta (in minuti).
 */

int main() {
    const int TARIFFA = 2;   
    const int SOSTA = 1;     

    int entrata, uscita, durata;

   
    cout << "Inserisci l'ora di entrata (in minuti): ";
    cin >> entrata;
    cout << "Inserisci l'ora di uscita (in minuti): ";
    cin >> uscita;

    // Calcolo della durata della sosta
    durata = uscita - entrata;

    // Calcolo del costo
    if (durata <= 60) {
        cout << "Il costo del parcheggio e': " << SOSTA << " euro." << endl;
    } else {
        int ore = (durata - 1) / 60; // arrotondamento per eccesso
        int costo = SOSTA + (ore + 1) * TARIFFA;
        cout << "Il costo del parcheggio e': " << costo << " euro." << endl;
    }

    return 0;
}
