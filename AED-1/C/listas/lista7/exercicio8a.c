#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x) {
    if (x < 2) {
        return x;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

int main() {
    int numeroDesejado = 0;

    printf("digite o numero o qual deseja saber a sequencia de fibonacci: ");
    scanf("%d", &numeroDesejado);

    printf("sequencia ate o numero %d: \n", numeroDesejado);
    for (int i = 0; i < numeroDesejado; i++) {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}
