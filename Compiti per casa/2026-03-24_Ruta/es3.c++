#include <iostream>
using namespace std;

/*
  Elimina un numero dal vettore
  mantenendo l'ordine degli altri elementi.
 */

int main() {
    int n, x;

    cout << "Dimensione vettore: ";
    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << "Numero da eliminare: ";
    cin >> x;

    int nuovo[n];
    int j = 0;

    // Copia tutti tranne x
    for(int i = 0; i < n; i++){
        if(v[i] != x){
            nuovo[j] = v[i];
            j++;
        }
    }

    
    cout << "Nuovo vettore:\n";
    for(int i = 0; i < j; i++){
        cout << nuovo[i] << " ";
    }

    return 0;
}