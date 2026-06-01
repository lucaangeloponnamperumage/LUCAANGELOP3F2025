#include <iostream>
using namespace std;

/*
 Programma che calcola la somma dei quadrati
 dei primi X numeri successivi a un numero Y.
 */

int main() {
    int X, Y;
    int somma = 0;

    // Input dei valori

    cout << "Inserisci il valore di X: ";
    cin >> X;
    cout << "Inserisci il valore di Y: ";
    cin >> Y;

    // Calcolo della somma dei quadrati

    for (int i = 1; i <= X; i++) {
        somma += (Y + i) * (Y + i);
    }

    // Output del risultato
    
    cout << "La somma dei quadrati e': " << somma << endl;

    return 0;
}
