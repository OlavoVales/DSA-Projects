#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int numero = 0;
    int numeroAdicionado = 0;

    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    numeroAdicionado = numero + 1; // numero += 1

    printf("o sucessor de %d é %d", numero, numeroAdicionado);

    return 0;
}