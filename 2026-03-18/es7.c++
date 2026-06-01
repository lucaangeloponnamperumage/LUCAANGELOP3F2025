#include <iostream>
using namespace std;

/*
  Programma che legge N numeri
  e calcola la somma degli elementi
  in posizione pari e dispari.
 */

int main() {

    int n;

    cout << "Inserisci un numero: ";
    cin >> n;

    int numeri[n];

    
    for(int i = 0; i < n; i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numeri[i];
    }

    int somma_pari = 0;
    int somma_dispari = 0;

   
    for(int i = 0; i < n; i++){

        if(i % 2 == 0){   
            somma_pari += numeri[i];
        } else {          
            somma_dispari += numeri[i];
        }
    }

    
    cout << "Somma posizioni pari: " << somma_pari << endl;
    cout << "Somma posizioni dispari: " << somma_dispari << endl;

    return 0;
}