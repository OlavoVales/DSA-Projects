#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero;
    float numeroraizcubica;

    printf("qual numero voc� deseja saber a raiz c�bica? ");
    scanf("%d", &numero);

    numeroraizcubica = cbrt(numero);

    printf("a raiz c�bica de %d � %.2f", numero, numeroraizcubica);

    return 0;
}
