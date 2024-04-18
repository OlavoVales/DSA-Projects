#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale(LC_ALL, "Portuguese");

int vetor[10];

for(int i = 0; i <10; i++){
    printf("digite o número desejados: ");
    scanf("%d", &vetor[i]);
}
    printf("numeros digitados: ");
    for(int i = 0; i <10; i++){

        if(vetor[i] >= 0){
            printf("%d, ", vetor[i]);
        }
    }

return 0;
}
