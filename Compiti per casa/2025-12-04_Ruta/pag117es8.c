#include <stdio.h>

// Verificare se tre numeri interi sono in progressione aritmetica.

int main() {
    int n1, n2, n3;

    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &n1, &n2, &n3);

   /* Condizione di progressione aritmetica:
   la differenza tra n2-n1 deve essere uguale a n3-n2
   */

    if ((n2 - n1) == (n3 - n2)) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri NON sono in progressione aritmetica.\n");
    }

    return 0;
}
