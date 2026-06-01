#include <iostream>
using namespace std;

/*
  Programma che legge N numeri interi
  e conta quante volte due numeri consecutivi sono uguali.
 */

int main() {

    int n;

    cout << "Inserisci il numero di elementi: ";
    cin >> n;

    int v[n];

  
    for(int i = 0; i < n; i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }

    int cont = 0;

    
    for(int i = 1; i < n; i++){
        if(v[i] == v[i-1]){
            cont++;
        }
    }

    
    cout << "Coppie consecutive uguali: " << cont << endl;

    return 0;
}