#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero = 0, auxiliar = 0, contadorDigitos = 0;
    float teste = 0.0;

    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero == 0 || numero < 0)
    {
        printf("favor digitar um número válido. ");
        exit(0);
    }

    auxiliar = numero;

    while(auxiliar != 0){
        auxiliar /= 10;
        contadorDigitos++;
    }

    printf("O número %d, tem %d digitos. ", numero, contadorDigitos);

    return 0;
}