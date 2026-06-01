#include <iostream>
#include <string>
using namespace std;

/*
  Unisce due vettori (codici fiscali e stipendi)
  e li ordina in base allo stipendio crescente.
 */

int main() {
    int n;
    cout << "Numero dipendenti: ";
    cin >> n;

    string cf[n];
    int stipendio[n];

    
    for(int i = 0; i < n; i++){
        cout << "Codice fiscale: ";
        cin >> cf[i];
        cout << "Stipendio: ";
        cin >> stipendio[i];
    }

    // Ordinamento per stipendio (bubble sort)
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(stipendio[j] > stipendio[j+1]){
                
                // scambio stipendi
                int temp = stipendio[j];
                stipendio[j] = stipendio[j+1];
                stipendio[j+1] = temp;

                // scambio anche codici fiscali
                string temp2 = cf[j];
                cf[j] = cf[j+1];
                cf[j+1] = temp2;
            }
        }
    }

    
    cout << "Dati ordinati:\n";
    for(int i = 0; i < n; i++){
        cout << cf[i] << " - " << stipendio[i] << endl;
    }

    return 0;
}