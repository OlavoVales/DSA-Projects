#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio1(int x) {
    if (x > 1) {
        funcaoRecursivaExercicio1 (x - 1);
    }
    
    printf("%d,", x);
}

int main() {
    int numero = 5;
    funcaoRecursivaExercicio1(numero);
    return 0;
}
