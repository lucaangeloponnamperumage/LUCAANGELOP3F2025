#include <iostream>
using namespace std;

/*
  Programma che legge N numeri e un numero controllore K.
  Conta quanti numeri sono uguali, maggiori o minori di K.
 */

int main() {
    int N, k;
    int uguale = 0, maggiore = 0, minore = 0;
    int numero;

    
    cout << "Inserisci quanti numeri vuoi inserire: ";
    cin >> N;
    cout << "Inserisci il numero controllore: ";
    cin >> k;

    // Lettura dei numeri e confronto
    for (int i = 0; i < N; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numero;

        if (numero == k) {
            uguale++;
        } else if (numero > k) {
            maggiore++;
        } else {
            minore++;
        }
    }

    
    cout << "Totale numeri uguali a " << k << ": " << uguale << endl;
    cout << "Totale numeri maggiori di " << k << ": " << maggiore << endl;
    cout << "Totale numeri minori di " << k << ": " << minore << endl;

    return 0;
}
