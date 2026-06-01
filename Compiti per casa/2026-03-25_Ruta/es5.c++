#include <iostream>
using namespace std;

/*
* Inserisce un numero in un vettore ordinato
  mantenendo l'ordine crescente.
 */

int main() {
    int n, x;

    cout << "Numero elementi del vettore: ";
    cin >> n;

    int v[100];

    // Inserimento elementi già ordinati
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }

    
    cout << "Numero da inserire: ";
    cin >> x;

    int pos = n;

    // Trova la posizione giusta
    for (int i = 0; i < n; i++) {
        if (x < v[i]) {
            pos = i;
            break;
        }
    }

    // Sposta gli elementi a destra
    for (int i = n; i > pos; i--) {
        v[i] = v[i - 1];
    }

    // Inserimento del nuovo numero
    v[pos] = x;
    n++;

    
    cout << "Vettore finale:\n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}