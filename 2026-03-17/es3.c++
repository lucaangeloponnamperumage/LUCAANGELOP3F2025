#include <iostream>
using namespace std;

/*
Verifica se un array è ordinato
(crescente)
*/

int main(){

    int N;
    bool ordinato = true;

    cout << "Numero elementi: ";
    cin >> N;

    int v[N];

    // Inserimento elementi
    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    // Controllo ordine
    for(int i=1; i<N; i++){
        if(v[i] < v[i-1]){
            ordinato = false;
        }
    }

    // Risultato
    if(ordinato)
        cout << "Array ordinato";
    else
        cout << "Array NON ordinato";

    return 0;
}