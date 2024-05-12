#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validacaoEmail(char email[]) {

    int validaArroba = 0;

    for(int i = 0; i < strlen(email); i++){

        if(email[i] == '@'){

            printf("A posicao que o @ se encontra eh a: %da\n", i + 1);
            printf("Tal e-mail eh valido. ");
            
            validaArroba = 1;

            return i;
        }
    }

    if (validaArroba = 0){

        printf("O email não é valido");

        return -1;
    }
}

int main(){

    char email[100];

    printf("informe o email: ");
    scanf("%s", email); 

    validacaoEmail(email);

    return 0;
}