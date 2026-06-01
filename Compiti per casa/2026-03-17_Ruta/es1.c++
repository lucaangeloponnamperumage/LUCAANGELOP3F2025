#include <iostream>
using namespace std;

/*
Legge un vettore di N interi e raddoppia
l'elemento nella posizione indicata dall'utente
*/

int main() {

    int N, indice;

    cout << "Dimensione vettore: ";
    cin >> N;

    int v[N];

    // Inserimento elementi del vettore
    for(int i=0; i<N; i++){
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    // Inserimento indice da raddoppiare
    cout << "Inserisci indice da raddoppiare: ";
    cin >> indice;

    // Controllo indice valido
    if(indice >= 0 && indice < N){
        v[indice] = v[indice] * 2;
    }

    // Stampa vettore aggiornato
    cout << "Vettore risultante:\n";
    for(int i=0; i<N; i++){
        cout << v[i] << " ";
    }

    return 0;
}