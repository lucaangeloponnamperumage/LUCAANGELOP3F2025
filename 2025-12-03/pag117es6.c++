#include <iostream>
using namespace std;

/* Obbiettivo:Programma che chiede di inserire un carattere e stampa a schermo
   "Hai scelto SI." se il carattere e' 'S' o 's',
   "Hai scelto NO." se il carattere e' 'N' o 'n',
   "Carattere errato." in tutti gli altri casi.
*/

int main(){
    char carattere;
    cout << "Inserisci un carattere (S=SI), (N=NO): ";
    cin >> carattere;
    if (carattere == 'S' || carattere == 's'){
        cout << "Hai scelto SI." << endl;
    }
    else if (carattere == 'N' || carattere == 'n'){
        cout << "Hai scelto NO." << endl;
    }
    else {
        cout << "Carattere errato." << endl;
    }
}