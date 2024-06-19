#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero;
    float numeroraizcubica;

    printf("qual numero você deseja saber a raiz cúbica? ");
    scanf("%d", &numero);

    numeroraizcubica = cbrt(numero);

    printf("a raiz cúbica de %d é %.2f", numero, numeroraizcubica);

    return 0;
}
