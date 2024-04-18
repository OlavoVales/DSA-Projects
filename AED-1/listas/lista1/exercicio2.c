#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int soma = 0;
    int media = 0;
    int multiplicacao = 0;

    printf("digite o 1o número: ");
    scanf("%d", &numero1);

    printf("digite o 2o número: ");
    scanf("%d", &numero2);

    printf("digite o 3o número: ");
    scanf("%d", &numero3);

    soma = numero1 + numero2 + numero3;

    media = (soma)/3;

    multiplicacao = numero1 * numero2 * numero3;

    printf("a soma dos número é: %d, a média é: %d e o produto é: %d.", soma, media, multiplicacao);

    return 0;
}