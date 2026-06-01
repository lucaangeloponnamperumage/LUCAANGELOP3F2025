#include <iostream>
using namespace std;

/*
 Programma che stampa N righe
 con M asterischi ciascuna.
 */

int main() {
    int N, M;

    // Input dei valori

    cout << "Inserisci N (numero di righe): ";
    cin >> N;
    cout << "Inserisci M (numero di asterischi): ";
    cin >> M;

    // Stampa delle righe
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
