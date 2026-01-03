
#include <iostream>
using namespace std;

int main() {
double tariffa, peso, costo_extra, prezzo_totale;
cout << "Inserisci la tariffa del biglietto: ";
cin >> tariffa;
cout << "Inserisci il peso del bagaglio in kg: ";
cin >> peso;
if (peso <= 20) {
        costo_extra = 0;
    } else {
        costo_extra = (peso - 20) * 0.02 * tariffa;
    }

prezzo_totale = tariffa + costo_extra;
cout << "Il prezzo totale del biglietto e': " << prezzo_totale << " euro" << endl;

    return 0;
}
