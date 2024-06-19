#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio7(int numero){

    if (numero > 1){
        return numero * funcaoRecursivaExercicio7(numero - 1);
    }
}

int main(){

    int numeroEscolhido = 0;

    printf("Digite o numero para calcular o fatorial: ");
    scanf("%d", &numeroEscolhido);

    printf("Fatorial de %d é: %d\n", numeroEscolhido, funcaoRecursivaExercicio7(numeroEscolhido));

    return 0;
}
