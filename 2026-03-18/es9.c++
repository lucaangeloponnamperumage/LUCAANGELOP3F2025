#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

/*
  Genera un vettore di 20 numeri casuali tra 1 e 100
  e verifica se esiste almeno un numero minore di 10.
 */

int main() {

    int v[20];
    bool trovato = false;

    // Generatore di numeri casuali
    srand(time(0));

    // Vettore con numeri casuali
    for(int i = 0; i < 20; i++){
        v[i] = rand() % 100 + 1;  
        cout << v[i] << " ";
    }

    cout << endl;

    
    for(int i = 0; i < 20; i++){
        if(v[i] < 10){
            trovato = true;
        }
    }

    
    if(trovato)
        cout << "Esiste almeno un numero minore di 10" << endl;
    else
        cout << "NON esiste alcun numero minore di 10" << endl;

    return 0;
}