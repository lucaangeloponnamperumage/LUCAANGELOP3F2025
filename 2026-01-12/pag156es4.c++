#include <iostream>
using namespace std;

/*
  Programma che legge 10 voti
  e stampa quelli sufficienti e insufficienti.
 */

int main() {
    float voti[10];
    const float SOGLIA = 6.0;

    for (int i = 0; i < 10; i++) {
        cout << "Inserisci il voto " << i + 1 << ": ";
        cin >> voti[i];
    }

    // Stampa voti sufficienti

    cout << "\nVoti sufficienti:\n";
    for (int i = 0; i < 10; i++) {
        if (voti[i] >= SOGLIA) {
            cout << voti[i] << " ";
        }
    }

    // Stampa voti insufficienti

    cout << "\n\nVoti insufficienti:\n";
    for (int i = 0; i < 10; i++) {
        if (voti[i] < SOGLIA) {
            cout << voti[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
