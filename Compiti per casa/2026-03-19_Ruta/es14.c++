#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
  Genera 100 numeri casuali tra 1 e 20
  e calcola quante volte compare ciascun numero.
 */

int main() {
    int v[100];
    int frequenza[21] = {0};

    srand(time(0));

    // Riempimento vettore casuale
    for (int i = 0; i < 100; i++) {
        v[i] = rand() % 20 + 1;
        frequenza[v[i]]++;
    }

    
    cout << "Vettore generato:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << v[i] << " ";
    }

    cout << endl << endl;

    
    for (int i = 1; i <= 20; i++) {
        cout << "Il numero " << i << " compare " << frequenza[i] << " volte." << endl;
    }

    return 0;
}