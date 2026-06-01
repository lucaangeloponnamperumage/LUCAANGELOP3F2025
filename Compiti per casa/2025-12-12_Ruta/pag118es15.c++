#include <iostream>
using namespace std;

/*
  Programma che calcola il costo finale di un biglietto
  aggiungendo una maggiorazione se il bagaglio supera i 20 kg.
 */

int main() {
    const double TARIFFA = 0.02; // maggiorazione del 2%
    int peso;
    double costo_biglietto;

   
    cout << "Inserisci il costo del biglietto in euro: ";
    cin >> costo_biglietto;

   
    cout << "Inserisci il peso del bagaglio in kg: ";
    cin >> peso;

    // Se il peso supera i 20 kg, applica la maggiorazione
    if (peso > 20) {
        costo_biglietto = costo_biglietto + (costo_biglietto * TARIFFA);
    }

    // Output del costo totale
    cout << "Il costo totale del biglietto e': "
         << costo_biglietto << " euro" << endl;

    return 0;
}
