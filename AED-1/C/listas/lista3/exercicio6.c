#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero = 0;
    int total = 1; // total tem que ser 1, senão como vai fazer total * i, se total for 0, a multiplicação também vai ser 0.

    printf("informe o numero que deseje saber o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("favor digitar um número válido. ");
        exit(0);
    }

    for (int i = numero; i > 1; i--)
    {
        total = total * i;
    }

    printf("o fatorial de %d é %d", numero, total);

    return 0;
}