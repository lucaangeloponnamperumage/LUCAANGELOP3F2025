#include <iostream>
using namespace std;

/*
  Crea una matrice di interi in cui ogni elemento
  è uguale alla somma dei suoi indici.
 */

int main() {
    int righe, colonne;

    cout << "Inserisci numero righe: ";
    cin >> righe;
    cout << "Inserisci numero colonne: ";
    cin >> colonne;

    int m[100][100];

    // Riempimento matrice
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            m[i][j] = i + j;
        }
    }

    // Stampa matrice
    cout << "Matrice:\n";
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}