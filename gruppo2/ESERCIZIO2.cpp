#include <iostream>
using namespace std;

int main() {
int a, b, c;

cout << "Inserisci tre numeri: ";
cin >> a >> b >> c;

if (b - a == c - b) {
cout << "I numeri sono in progressione aritmetica." << endl;
} else {
cout << "I numeri NON sono in progressione aritmetica." << endl;
}

return 0;
}
