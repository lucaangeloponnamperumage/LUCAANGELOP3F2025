
#include <iostream>
using namespace std;

int main() {
float a, b, c;

cout << "Inserisci le lunghezze dei tre lati: ";
cin >> a >> b >> c;

if (a > 0 && b > 0 && c > 0 &&
a + b > c &&
a + c > b &&
b + c > a) {
        
cout << "I tre numeri possono essere i lati di un triangolo." << endl;
} else {
cout << "I tre numeri NON possono essere i lati di un triangolo." << endl;
}

return 0;
}
