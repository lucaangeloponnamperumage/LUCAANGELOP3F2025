#include <stdio.h>

/*
  Programma che calcola il termine a_N
  della successione definita da:
  a = 3
  a = 2*a + i
 */

int main() {
    int N;
    int a = 3;

    
    printf("Inserisci N: ");
    scanf("%d", &N);

    // Calcolo del termine a_N
    for (int i = 1; i <= N; i++) {
        a = 2 * a + i;
    }

    
    printf("Il termine a_%d e': %d\n", N, a);

    return 0;
}
