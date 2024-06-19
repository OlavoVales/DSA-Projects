#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio5(int limiteInferior, int limiteSuperior){

    if (limiteInferior < limiteSuperior){
        return limiteInferior + funcaoRecursivaExercicio5( limiteInferior + 1, limiteSuperior);
    }
}

int main(){

    int limiteInferior, limiteSuperior;

    printf("digite o numero correspondente ao limite inferior: ");
    scanf("%d", &limiteInferior);
    printf("digite o numero correspondente ao limite superior: ");
    scanf("%d", &limiteSuperior);

    if(limiteSuperior <= limiteInferior){
        printf("o limite superior precisa ser maior que o limite inferior. ");
    }else if(limiteSuperior < 0 || limiteInferior < 0){
        printf("os limites não podem ser negativos ");
    }else{
        printf("%d", funcaoRecursivaExercicio5(limiteInferior, limiteSuperior));
    }

    return 0;
}