/* https://replit.com/@olavocastro/exercicio5-lista-5 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Descrição: a função tem como função identificar se o email é valido ou não, além de caso for válido dizer a posição do arroba
Entrada: input feito pelo usuário.
Saida: A resposta caso o e-mail for válido, onde também e dito a posição do @ ou a resposta caso o e-mail for inválido
*/

int validacaoEmail(char email[]) {

    int validaArroba = 0;

    for(int i = 0; i < strlen(email); i++){

        if(email[i] == '@'){

            printf("A posicao que o @ se encontra eh a: %da.\n", i + 1);
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

/*
Descrição: Função principal que tem como função receber o input do usuário e chamar a função ValidacaoEmail()
Entrada: o email informado pelo usuário
Saida: o resultado caso o email for válido ou não.
*/

int main(){

    char email[100];

    printf("informe o email: ");
    scanf("%s", email); 

    validacaoEmail(email);

    return 0;
}