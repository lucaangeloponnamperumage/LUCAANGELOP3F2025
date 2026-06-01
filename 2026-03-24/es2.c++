#include <iostream>
#include <string>
using namespace std;

/*
  Stampa il primo e l'ultimo cognome
  in ordine alfabetico.
 */

int main() {
    int n;
    cout << "Numero studenti: ";
    cin >> n;

    string v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // Ordinamento
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(v[j] > v[j+1]){
                string temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }

    cout << "Primo: " << v[0] << endl;
    cout << "Ultimo: " << v[n-1] << endl;

    return 0;
}