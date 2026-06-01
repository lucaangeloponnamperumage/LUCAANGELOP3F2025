#include <iostream>
#include <string>
using namespace std;

/*
  Legge i cognomi degli studenti
  e li ordina in ordine alfabetico.
 */

int main() {
    int n;
    cout << "Numero studenti: ";
    cin >> n;

    string v[n];

    
    for(int i = 0; i < n; i++){
        cout << "Cognome " << i+1 << ": ";
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

    
    cout << "Ordine alfabetico:\n";
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    return 0;
}