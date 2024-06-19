#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x1 = 0.0;
    float y1 = 0.0;
    float x2 = 0.0;
    float y2 = 0.0;
    float subtracao1 = 0.0;
    float subtracao2 = 0.0;
    float elevado1 = 0.0;
    float elevado2 = 0.0;
    float distEu = 0.0;

    printf("digite separadamente o x e y do 1o ponto cartesiano (x e y): ");
    scanf("%f %f", &x1, &y1);

    printf("digite separadamente o x e y do 1o ponto cartesiano (x e y): ");
    scanf("%f %f", &x2, &y2);

    subtracao1 = x2 - x1;
    subtracao2 = y2 - y1;

    elevado1 = pow(subtracao1, 2);
    elevado2 = pow(subtracao2, 2);

    distEu = sqrt(elevado1 + elevado2);

    printf("a distância Euclidiana dos dois pontos dados é: %f", distEu);

    return 0;
}