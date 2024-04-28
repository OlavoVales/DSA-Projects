#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste(int n, int *b, int *k){ //função responsável pela operação matemática solicitada

    setlocale(LC_ALL, "Portuguese");

    n = *b * *k;

    printf("o valor de n é %d e o valor de b é %d", n, *b);

}

int main(){ //função responsavel pelos inputs e pela chamada do procedimento

    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;

    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("digite o terceiro numero: ");
    scanf("%d", &numero3);

    teste(numero1, &numero2, &numero3);

    return 0;
}