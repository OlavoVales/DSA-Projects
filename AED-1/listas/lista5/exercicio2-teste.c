#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam = 10, vetor[10];

    for (int i = 0; i < tam; i++){
        printf("digite a nota do %d aluno: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int valores = 0, media = 0;

    for(int i = 0; i < tam; i++){

        valores += vetor[i];
    }

    media = valores/10;

    printf("%d", media);

    return 0;
}