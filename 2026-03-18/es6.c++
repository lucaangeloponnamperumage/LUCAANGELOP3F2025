#include <iostream>
using namespace std;

/*
  Legge gli stipendi di N dipendenti
  e trova il massimo e il minimo
  tra quelli compresi tra 1500 e 2000 euro.
 */

int main() {

    int n;

    cout << "Inserisci il numero di dipendenti: ";
    cin >> n;

    int stipendi[n];

    
    for(int i = 0; i < n; i++){
        cout << "Stipendio dipendente " << i+1 << ": ";
        cin >> stipendi[i];
    }

    int max = -1;        
    int min = 10000;    

    // Ricerca max e min nell'intervallo
    for(int i = 0; i < n; i++){
        if(stipendi[i] >= 1500 && stipendi[i] <= 2000){

            if(stipendi[i] > max){
                max = stipendi[i];
            }

            if(stipendi[i] < min){
                min = stipendi[i];
            }
        }
    }

    
    if(max == -1){
        cout << "Nessuno stipendio nell'intervallo 1500-2000" << endl;
    } else {
        cout << "Stipendio massimo: " << max << endl;
        cout << "Stipendio minimo: " << min << endl;
    }

    return 0;
}