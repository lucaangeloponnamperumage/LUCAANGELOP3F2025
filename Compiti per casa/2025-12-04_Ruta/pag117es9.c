#include <stdio.h>

/*
 * Programma che legge un valore limite e tre temperature
 * e decide se il riscaldamento deve essere acceso o spento.
 */

int main() {
    double limite, t1, t2, t3;

    // Input del valore limite
    printf("Inserire il valore limite di accensione: ");
    scanf("%lf", &limite);

    // Input delle tre temperature
    printf("Inserire tre temperature: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    // Calcolo della media
    double media = (t1 + t2 + t3) / 3;

    // Output della media
    printf("Media = %.2f -> ", media);

    // Decisione accensione/spegnimento
    if (media < limite)
        printf("Riscaldamento acceso.\n");
    else
        printf("Riscaldamento spento.\n");

    return 0;
}
