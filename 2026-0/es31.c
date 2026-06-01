#include <stdio.h>

/*
  Programma che legge le copie vendute in un mese di 31 giorni.
  Calcola:
  - il giorno con il massimo delle vendite
  - la media giornaliera
  - la media delle vendite di domenica
 */

int main() {
    int sett, copie;
    int max_copie = -1, giorno_max = 0;
    int totale = 0;
    int totale_dom = 0, count_dom = 0;

    // Inserimento dati per 31 giorni
    for (int i = 1; i <= 31; i++) {
        printf("Giorno %d (settimana 1=Lun..7=Dom) e copie: ", i);
        scanf("%d %d", &sett, &copie);

        // Controllo massimo
        if (copie > max_copie) {
            max_copie = copie;
            giorno_max = i;
        }

        // Somma totale
        totale += copie;

        // Dati della domenica
        if (sett == 7) {
            totale_dom += copie;
            count_dom++;
        }
    }

    // Output risultati
    printf("Massimo vendite il giorno: %d\n", giorno_max);
    printf("Media giornaliera: %.2f\n", (float)totale / 31);

    if (count_dom > 0) {
        printf("Media domenicale: %.2f\n",
               (float)totale_dom / count_dom);
    }

    return 0;
}
