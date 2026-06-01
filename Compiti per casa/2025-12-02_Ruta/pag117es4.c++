#include <iostream>
using namespace std;

/*
    Programma: Conversione di ore in minuti o secondi
    Obiettivo: chiedere un intervallo di tempo in ore e convertirlo
    in minuti oppure secondi a scelta dell'utente.
*/

int main(){
    int ore;
    float min, sec;
    char scelta;
    cout << "Inserisci un intervallo di tempo in ore: ";
    cin >> ore;

    // Calcolo delle conversioni

    min = ore * 60;
    sec = min * 60;

    // Scelta dell'utente

    cout<<"Vuoi trasformalo in minuti o secondi? (m/s): ";
    cin>>scelta;

    // Conversione basata sulla scelta

    if(scelta == 'm' || scelta == 'M'){
        cout << ore << " ore corrispondono a " << min << " minuti." << endl;
    } else if(scelta == 's' || scelta == 'S'){
        cout << ore << " ore corrispondono a " << sec << " secondi." << endl;
    } else {
        cout << "Scelta non valida." << endl;
    }

}