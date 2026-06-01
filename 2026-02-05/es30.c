#include <stdio.h>

/*
  Programma che trova il primo termine
  (potenza di 2) maggiore di un numero N.
 */

int main() {
    int N;
    int termine = 1;

    
    printf("Inserisci N: ");
    scanf("%d", &N);

    // Raddoppia finché il termine supera N
    while (termine <= N) {
        termine *= 2;
    }

    
    printf("Il primo termine maggiore di %d e': %d\n", N, termine);

    return 0;
}
