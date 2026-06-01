#include <iostream>
using namespace std;

/*
  Programma che stampa N numeri,
  ognuno doppio del precedente.
 */

int main() {
    int N;
    int valore = 1;

    cout << "Inserisci un numero N (> 0): ";
    cin >> N;
    if(N <= 0) {
        cout << "Errore: N deve essere maggiore di 0." << endl;
        return 1;
    }
    

    // Stampa dei numeri
    for (int i = 0; i < N; i++) {
        cout << valore << endl;
        valore = valore * 2;
    }

    return 0;
}
