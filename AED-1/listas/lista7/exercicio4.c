#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio4(int x){

    printf("%d, ", x);

    if(x > 0){
        funcaoRecursivaExercicio4(x - 1);
    } 

}

int main (){

    int numeroEscolhido = 0;

    printf("digite o número que deseja saber a ordem descrescente: ");
    scanf("%d", &numeroEscolhido);

    if(numeroEscolhido <= 0){
        printf("favor digitar um numero maior que 0");
    }else{
        funcaoRecursivaExercicio4(numeroEscolhido);
    }

    return 0;
}