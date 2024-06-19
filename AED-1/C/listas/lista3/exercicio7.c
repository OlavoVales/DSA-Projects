#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero = 0;

    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero == 0 || numero < 0)
    {
        printf("favor digitar um número válido. ");
        exit(0);
    }

    printf("numeros inteiros menores que %d: ", numero);

    for (int i = 1; i < numero; i++)
    {
        printf("%d ", i);
    }

    return 0;
}