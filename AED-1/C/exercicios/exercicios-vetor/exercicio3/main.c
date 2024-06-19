#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int vetor[20];

    for(int i = 0; i <20; i++){

        printf("digite os n�meros desejados: ");
        scanf("%d", &vetor[i]);

        /*
        porque

        if(vetor[i] > 0){
            scanf("%d", &vetor[i]);
        }

        d� esse treco estranho?
        */
    }

    printf("os multiplos de 2 s�o: ");
    for(int j = 0; j <20;j++){
        if(vetor[j] % 2 == 0){
            printf("%d, ", vetor[j]);
        }
    }
}
