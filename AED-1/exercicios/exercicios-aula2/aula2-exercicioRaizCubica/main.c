#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero, raizquadradanumero;

    printf("qual o numero que deseja saber a raiz quadrada? ");
    scanf("%f", &numero);

    raizquadradanumero = sqrt(numero);

    printf("A raiz quadrada de %.2f é: %.2f", numero, raizquadradanumero);

    return 0;
}
