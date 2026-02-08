#include <iostream>
using namespace std;

int main() {
int num, max, c = 0;

cout << "Inserisci un numero: ";
cin >> max;
c = 1;

while (c < 4) {cout << "Inserisci un numero: ";cin >> num;
if (num > max) {max = num;}}

cout << "Il valore massimo è: " << max << endl;
return 0;
}