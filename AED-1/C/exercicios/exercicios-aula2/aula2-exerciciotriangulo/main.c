#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float base, altura, areatriangulo;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("digite a altura do triangulo: ");
    scanf("%f", &altura);

    areatriangulo = ((base * altura)/2);

    printf("A area do triangulo é: %f", areatriangulo);

    return 0;
}
