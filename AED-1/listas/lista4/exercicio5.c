#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void primo(int m, int *p1, int *p2){

    setlocale(LC_ALL, "Portuguese");

    while(*p1 < m){
        *p1++;

        printf("o maior numero primo menor que %d é %d, enquanto o menor numero primo maior que %d é %d", *p1, m, m, *p2);
    }


}

//exemplo: m = 12, maior numero primo menor que 12 -> 11 (*p1), menor numero primo maior que 12 -> 13(*p2)

int main (){ //função responsavel pelo input inicial e pela chamada do procedimento

    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;

    printf("digite o 1o número: ");
    scanf("%d", &numero1);

    primo(numero1, &numero2, &numero3);

    return 0;
}