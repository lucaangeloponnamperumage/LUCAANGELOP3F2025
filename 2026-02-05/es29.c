#include <stdio.h>

/*
  Programma che legge N misurazioni
  e calcola:
  - errore assoluto
  - errore relativo
  - errore percentuale
 */

int main() {
    int N;
    float val, max, min;
    float somma = 0.0;

    // Input numero di misurazioni
    printf("Numero misurazioni: ");
    scanf("%d", &N);

    // Lettura valori
    for (int i = 0; i < N; i++) {
        scanf("%f", &val);

        if (i == 0)
            max = min = val;

        if (val > max)
            max = val;

        if (val < min)
            min = val;

        somma += val;
    }

    // Calcoli
    float media = somma / N;
    float errore_assoluto = (max - min) / 2;
    float errore_relativo = errore_assoluto / media;

    // Output
    printf("Errore assoluto: %.2f\n", errore_assoluto);
    printf("Errore relativo: %.2f\n", errore_relativo);
    printf("Errore percentuale: %.2f%%\n", errore_relativo * 100);

    return 0;
}
