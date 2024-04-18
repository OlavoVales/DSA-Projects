#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero = 0;
    float soma = 0;
    float resultado = 0;

    for(int contagem = 0;contagem < 10;contagem++){
        printf("digite os numeros: ", contagem);
        scanf("%f", &numero);
        soma += numero;
    }

    resultado = (soma / 10);

    printf("o resultado da media é: %f", resultado);

    return 0;
}
