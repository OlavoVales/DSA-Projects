#include <stdio.h>
#include <stdlib.h>

int funcaoRecursivaExercicio6(int numero, int expoente){

    if(expoente > 1){
        return numero * funcaoRecursivaExercicio6(numero, expoente - 1);
    }
}

int main(){

    int numero = 2;
    int expoente = 3;

    printf("%d", funcaoRecursivaExercicio6(numero, expoente));

    return 0;
}
