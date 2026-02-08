#include <iostream>
using namespace std;

int main() 
{int x, y;
int somma = 0;

cout << "Inserisci x e y: ";
cin >> x >> y;

for (int i = 1; i <= x; i++) {somma += (y + i) * (y + i);}

cout << "La somma dei quadrati e': " << somma << endl;

return 0;
}

