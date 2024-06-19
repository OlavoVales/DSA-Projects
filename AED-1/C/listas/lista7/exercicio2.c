#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio2(int x) {

    int numero = 5;

    printf("%d," , x);

    if (x < numero) {
        funcaoRecursivaExercicio2(x + 1);
    }
    
    printf("%d,", x);
}

int main() {
    int numeroBase = 1;
    funcaoRecursivaExercicio2(numeroBase);

    return 0;
}
