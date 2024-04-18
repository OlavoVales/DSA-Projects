#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a = 0,b = 0,c = 0,delta = 0;
    float raiz1 = 0, raiz2 = 0;

    printf("informe os valores de a, b e c da equacao de segundo grau para que se saiba as raizes: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (pow(b, 2)) - (4 * a * c);

    raiz1 = (-(b) + sqrt(delta))/(2 * a);
    raiz2 = (-(b) - sqrt(delta))/(2 * a);

    if(delta < 0){
        printf("a equação nao possui raizes reais.");
    }else{
        printf("as raizes da equação %dx^2 %dx %d são: %.2f e %.2f", a, b, c, raiz1, raiz2);
    }

    return 0; //return 0 tem que ficar no final, determina o fim da execução da função global.
}

