
#include <iostream>
using namespace std;
#include <string>
int main()
{int n;
 string studio;
 cout << "quale il tuo punteggio nelle prove scritte?" << endl;  
 cin >> n;
 cout << "che titolo di studio hai?" << endl;
 cin >> studio;
 if(studio == "elementare") {cout << "il tuo punteggio finale e"<< n+1 << endl;}
 else if(studio == "media") {cout << "il tuo punteggio finale e"<< n+2 << endl;}
 else if(studio == "superiore") {cout << "il tuo punteggio finale e"<< n+4 << endl;}
 else if(studio == "laurea") {cout << "il tuo punteggio finale e"<< n+7 << endl;}
 else if(studio == "nessuno") {cout << "il tuo punteggio finale e"<< n << endl;};























}