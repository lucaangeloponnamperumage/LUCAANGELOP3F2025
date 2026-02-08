
#include <iostream>
using namespace std;

int main() {
string g1,g2,g3;
int v1,v2,v3;
double inc1,inc2,inc3;
cin >> g1 >> v1 >> g2 >> v2 >> g3 >> v3;
inc1 = (v1<=200 ? 0.1 : v1<300 ? 0.2 : 0.3) * v1;
inc2 = (v2<=200 ? 0.1 : v2<300 ? 0.2 : 0.3) * v2;
inc3 = (v3<=200 ? 0.1 : v3<300 ? 0.2 : 0.3) * v3;
string maxg = g1; int maxv = v1;

if(v2>maxv){ maxv=v2; maxg=g2; }
if(v3>maxv){ maxv=v3; maxg=g3; }
cout << "Giornale piu' venduto: " << maxg << " con " << maxv << " copie\n";
cout << "Incasso totale: " << inc1+inc2+inc3 << " euro\n";

return 0;
}
