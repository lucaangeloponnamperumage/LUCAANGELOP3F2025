#include <iostream>
using namespace std;

/*
Stampa i premi compresi
tra due valori inseriti
*/

int main(){

    int N;
    float premi[100], min, max;

    cout << "Numero premi: ";
    cin >> N;

    // Inserimento premi
    for(int i=0; i<N; i++){
        cout << "Premio " << i+1 << ": ";
        cin >> premi[i];
    }

    cout << "Valore minimo: ";
    cin >> min;

    cout << "Valore massimo: ";
    cin >> max;

    // Stampa premi nell'intervallo
    cout << "Premi compresi nell'intervallo:\n";

    for(int i=0; i<N; i++){
        if(premi[i] >= min && premi[i] <= max){
            cout << premi[i] << endl;
        }
    }

    return 0;
}