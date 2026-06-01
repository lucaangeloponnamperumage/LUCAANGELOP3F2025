#include <stdio.h>

/*
  Programma che calcola il guadagno totale di un lavoratore
  sapendo che la paga giornaliera raddoppia ogni giorno.
 */

int main() {
    double paga = 10.0;
    double totale = 0.0;

    // Calcolo del guadagno per 22 giorni
    for (int giorno = 1; giorno <= 22; giorno++) {
        totale += paga;
        paga *= 2;
    }

  
    printf("Dopo 22 giorni il lavoratore guadagna: %.2f Euro\n", totale);

    return 0;
}
