#include <iostream>
using namespace std;

/*
  Legge 10 numeri interi e controlla se
  nelle posizioni pari dell'array ci sono solo numeri pari.
 */

int main() {
    int v[10];
    bool ok = true;

    
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    
    for (int i = 0; i < 10; i += 2) {
        if (v[i] % 2 != 0) {
            ok = false;
        }
    }

    
    if (ok)
        cout << "Nelle posizioni pari ci sono solo numeri pari." << endl;
    else
        cout << "Nelle posizioni pari NON ci sono solo numeri pari." << endl;

    return 0;
}