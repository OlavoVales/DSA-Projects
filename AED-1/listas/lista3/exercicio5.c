#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero = 0, auxiliar = 0, reverso = 0;

    printf("digite um número natural: ");
    scanf("%d", &numero);

    if (numero == 0 || numero < 0)
    {
        printf("favor digitar um número válido. ");
    }

    auxiliar = numero;

    while (auxiliar != 0)
    { // não entendi o pq tem que ser while e não if
        reverso = reverso * 10 + auxiliar % 10;
        auxiliar = auxiliar / 10;
    }

    if (reverso == numero)
    {
        printf("%d é palindrome. ", numero);
    }
    else
    {
        printf("%d nao é palindrome.", numero);
    }

    return 0;
}