
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Quante coppie vuoi inserire? ";
cin >> n;

int a, b;
int contatoreUguali = 0;

for (int i = 0; i < n; i++) {
    cout << "Inserisci la coppia " << i + 1 << ": ";
    cin >> a >> b;

if (a == b) {
    contatoreUguali++;
}}

cout << "Il numero di coppie con numeri uguali e': " << contatoreUguali << endl;

return 0;
}
