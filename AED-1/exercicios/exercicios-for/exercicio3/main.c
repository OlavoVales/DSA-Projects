#include <stdio.h>
#include <stdlib.h>

int main(){

    //deu errado, tava pra ser refeito

    int numero = 0;
    int total = 0;
    int fatorial = 0;

    printf("digite o numero: ");
    scanf("%d", &numero);

    while(fatorial < 1){

        fatorial--;

        total = numero * fatorial;
    }

    printf("o fatorial do numero %d é %d", numero,total);
}
