#include <stdio.h>

/*
  Programma che legge i dati di N regioni.
  Per ogni regione legge il numero di province
  e gli abitanti di ciascuna provincia.
  Stampa il totale per regione e il totale nazionale.
 */

int main() {
    int N_reg, M_prov;
    int ab;
    int tot_reg;
    int tot_globale = 0;
    char nome[50];

    // Input numero regioni
    printf("Numero regioni: ");
    scanf("%d", &N_reg);

    // Ciclo sulle regioni
    for (int i = 0; i < N_reg; i++) {
        printf("Nome regione: ");
        scanf("%s", nome);

        printf("Numero province: ");
        scanf("%d", &M_prov);

        tot_reg = 0;

        // Ciclo sulle province
        for (int j = 0; j < M_prov; j++) {
            printf("Abitanti provincia %d: ", j + 1);
            scanf("%d", &ab);
            tot_reg += ab;
        }

        // Output regione
        printf("Regione %s: %d abitanti\n", nome, tot_reg);

        // Aggiornamento totale nazionale
        tot_globale += tot_reg;
    }

    // Output finale
    printf("Totale nazione: %d abitanti\n", tot_globale);

    return 0;
}
