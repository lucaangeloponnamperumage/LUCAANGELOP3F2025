
#include <iostream>
using namespace std;

int main() {
int settimane;
char lenzuola;
double costo = 100; // quota fissa
cout << "Inserisci il numero di settimane (1 o 2): ";
cin >> settimane;
cout << "Vuoi il supplemento lenzuola? (s/n): ";
cin >> lenzuola;
if(settimane == 1) costo += 600;
else if(settimane == 2) costo += 1100;
if(lenzuola == 's' || lenzuola == 'S') costo += 20 * settimane;
cout << "Costo totale del soggiorno: " << costo << " euro" << endl;
return 0;
}
