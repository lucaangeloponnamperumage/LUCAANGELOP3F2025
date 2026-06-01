#include <iostream>
using namespace std;

/*
  Programma che stampa i primi 50 numeri pari
  e i primi 50 numeri dispari.
 */

int main() {

    // Stampa dei primi 50 numeri 
    
    cout << "Numeri pari:" << endl;
    for (int i = 1; i <= 50; i++) {
        cout << i * 2 << endl;
    }

    // Stampa dei primi 50 numeri dispari

    cout << "\n Numeri dispari:" << endl;
    for (int i = 0; i < 50; i++) {
        cout << i * 2 + 1 << endl;
    }

    return 0;
}
