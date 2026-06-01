#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
  Riempie una matrice 10x10 con numeri casuali tra 0 e 9,
  la stampa e conta quanti zeri sono presenti.
 */

int main() {
    int m[10][10];
    int contZeri = 0;

    srand(time(0));

    // Riempimento matrice
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            m[i][j] = rand() % 10;   // numeri da 0 a 9

            if (m[i][j] == 0) {
                contZeri++;
            }
        }
    }

    // Stampa matrice
    cout << "Matrice:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Numero di zeri presenti: " << contZeri << endl;

    return 0;
}