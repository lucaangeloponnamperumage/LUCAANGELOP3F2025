#include <iostream>
using namespace std;

/*
 Programma che stampa tutti i numeri
 compresi tra due estremi e ne calcola la quantità.
 */

int main() {
    int n1, n2;

    // Input degli estremi
    cout << "Inserisci i due estremi dell'intervallo: ";
    cin >> n1 >> n2;

    // Stampa dei numeri compresi nell'intervallo
    for (int i = n1; i <= n2; i++) {
        cout << i << endl;
    }

    // Calcolo e stampa del totale dei numeri
    cout << "I numeri compresi nell'intervallo in tutto sono "
         << (n2 - n1 + 1) << endl;

    return 0;
}
