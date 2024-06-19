#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio3(int limiteInferior, int limiteSuperior) {

    printf("%d," , limiteInferior);

    if (limiteSuperior > limiteInferior) {
        funcaoRecursivaExercicio3(limiteInferior + 1, limiteSuperior);
    }

    printf("%d,", limiteInferior);
}

int main() {
    int limiteInferior = 1;
    int limiteSuperior = 5;
    funcaoRecursivaExercicio3(limiteInferior, limiteSuperior);

    return 0;
}
