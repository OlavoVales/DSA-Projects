#include <stdio.h>
#include <stdlib.h>

int main(){

    int primeiroValor = 0;
    int segundoValor = 0;
    int escolhaOperacao = 0;
    float resultado = 0;

    printf("digite o primeiro número desejado: ");
    scanf("%d", &primeiroValor);

    printf("digite o segundo numero desejado: ");
    scanf("%d", &segundoValor);

    printf("digite o numero correspondente a operação que deseja realizar, sendo 1(soma), 2(subtracao), 3(multiplicacao), 4(divisao), 5(modulo): ");
    scanf("%d", &escolhaOperacao);
    //como fazer looping infinito só dessa terceira, até condição ser atingida.

    switch(escolhaOperacao){

        case 1:
            resultado = primeiroValor + segundoValor;
            printf("o resultado da soma é: %.2f.", resultado);
        break;

        case 2:
            resultado = primeiroValor - segundoValor;
            printf("o resultado da subtracao é: %.2f.", resultado);
        break;

        case 3:
            resultado = primeiroValor * segundoValor;
            printf("o resultado da multiplicacao é: %.2f", resultado);
        break;

        case 4:
            resultado = primeiroValor / segundoValor;
            printf("o resultado da divisao é: %.2f", resultado);
        break;

        case 5:
            resultado = primeiroValor % segundoValor;
            printf("o resultado do modulo é: %.2f", resultado);
        break;

        default:
            printf("favor inserir algum número válido correspondente a escolha de operação. ");
    }

    return 0;
}