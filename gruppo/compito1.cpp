#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a, b, c;
double delta, x1, x2, x;
cout << "Inserisci a, b, c: ";
cin >> a >> b >> c;
if (a == 0) {
cout << "L'equazione non e' di secondo grado" << endl;
} else {delta = b * b - 4 * a * c;
if (delta > 0) {
x1 = (-b + sqrt(delta)) / (2 * a);
x2 = (-b - sqrt(delta)) / (2 * a);

cout << "Due soluzioni reali:" << endl;
cout << "x1 = " << x1 << endl;
cout << "x2 = " << x2 << endl;} 
else if (delta == 0) {
x = -b / (2 * a);

cout << "Una soluzione reale:" << endl;
cout << "x = " << x << endl;} 
else {
            cout << "L'equazione non ha radici reali" << endl;
        }
    }

    return 0;
}