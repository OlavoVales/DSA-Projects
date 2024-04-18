#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale(LC_ALL, "Portuguese");

int vetor[10], maiorNumero = 0;

for(int i = 0; i <10; i++){

    printf("digite o número desejado: ");
    scanf("%d", &vetor[i]);

    if(vetor[i]> maiorNumero){
        maiorNumero = vetor[i];
    }
}

printf("%d", maiorNumero);

return 0;
}
