#include <iostream>
using namespace std;

#define N 4


void stampa(int m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}


int sommaDiagonale(int m[N][N]) {
    int somma = 0;
    for (int i = 0; i < N; i++) {
        somma += m[i][i];
    }
    return somma;
}

// Calcola la trasposta e la salva in t
void trasposta(int m[N][N], int t[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            t[j][i] = m[i][j];
        }
    }
}

int main() {
    int mat[N][N];
    int t[N][N];
    int scelta;


    cout << "Inserisci i valori della matrice 4x4:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    do {
        cout << "\n1. Somma diagonale principale\n";
        cout << "2. Trasposta matrice\n";
        cout << "3. Stampa matrice\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                cout << "Somma diagonale: " << sommaDiagonale(mat) << endl;
                break;

            case 2:
                trasposta(mat, t);
                cout << "Trasposta:\n";
                stampa(t);
                break;

            case 3:
                cout << "Matrice:\n";
                stampa(mat);
                break;

            case 0:
                break;

            default:
                cout << "Scelta non valida\n";
        }
    } while (scelta != 0);

    return 0;
}