#include <iostream>
using namespace std;

  /* Programma: Classificazione di un numero 
    Obiettivo: stabilire se un numero è positivo, negativo oppure zero.
    */

int main(){
    float numero;
    
    // Richiesta input all'utente

    cout<<"Inserisci un numero intero: ";
    cin>>numero;

      // Controllo del segno del numero

    if(numero>0){
        cout<<"Il numero è positivo."<<endl;
    } else if(numero<0){
        cout<<"Il numero è negativo."<<endl;
    } else {
        cout<<"Il numero è zero."<<endl;
    }
}
