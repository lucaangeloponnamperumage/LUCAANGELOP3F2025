#include <iostream>
using namespace std;

int main() {
int limite, numero;
int cont = 0;
bool trovato = false;

cout << "Inserisci il numero massimo di tentativi: ";
cin >> limite;

while (cont < limite && !trovato) {cout << "Inserisci un numero intero: ";cin >> numero; cont++;
if (numero % 7 == 0) {trovato = true;}}

if (trovato) {cout << "Numero divisibile per 7 trovato dopo "<< cont << " inserimenti." << endl;} else {
cout << "Fallimento: non e' stato inserito alcun numero divisibile per 7." << endl;}

return 0;
}

