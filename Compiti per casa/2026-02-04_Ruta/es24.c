#include <stdio.h>

/*
  Programma che legge da file i dati di N seggi elettorali
  e stampa le percentuali di votanti, schede bianche e nulle.
 */

int main() {
    int N;
    int iscritti, votanti, nulle, bianche;
    FILE *fp;

    // Apertura file
    fp = fopen("Risultati.txt", "r");
    if (fp == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    // Lettura numero di seggi
    fscanf(fp, "%d", &N);

    // Lettura dati dei seggi
    for (int i = 0; i < N; i++) {
        fscanf(fp, "%d %d %d %d", &iscritti, &votanti, &nulle, &bianche);

        printf("Seggio %d:\n", i + 1);
        printf("Votanti: %.2f%%\n", (float)votanti / iscritti * 100);
        printf("Schede bianche: %.2f%%\n", (float)bianche / votanti * 100);
        printf("Schede nulle: %.2f%%\n", (float)nulle / votanti * 100);
    }

    // Chiusura file
    fclose(fp);

    return 0;
}
