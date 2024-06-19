/* https://replit.com/@olavocastro/exercicio6-lista-5 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Descrição: Procedimento que tem como função contabilizar a quantidade de palavras repetidas digitadas pelo usuário, especificando quais elas são e sua quantidade.
Entrada: O input de palavras diversas feito pelo usuário
Saida: A contibilização caso o usuário tenha digitados varias palavras repetidamente
*/

void contarPalavrasRepetidas(char texto[]){

    char palavras[100][100];

    int frequenciaPalavras[100];

    int numPalavrasUnicas = 0;

    // Tokenizar o texto para obter as palavras
    char *token = strtok(texto, " .,!?\n");

    while(token != NULL){

        int i;
        int encontrada = 0;

        // Verificar se a palavra já está na matriz
        for(i = 0; i < numPalavrasUnicas; i++){

            if(strcmp(palavras[i], token) == 0){

                encontrada = 1;
                break;
            }
        }

        if(encontrada){

            // Incrementar a frequência da palavra existente
            frequenciaPalavras[i]++;

        }else{

            // Adicionar a palavra à matriz
            strcpy(palavras[numPalavrasUnicas], token);

            frequenciaPalavras[numPalavrasUnicas] = 1;

            numPalavrasUnicas++;
        }

        // Obter a próxima palavra
        token = strtok(NULL, " .,!?\n");

    }

    printf("Palavras repetidas e suas frequencias:\n");

    for(int i = 0; i < numPalavrasUnicas; i++){

        if(frequenciaPalavras[i] > 1){

            printf("%s: %d\n", palavras[i], frequenciaPalavras[i]);

        }
    }
}

/*
Descrição: Função principal que tem como função receber o input do usuário e chamar a função ValidacaoEmail()
Entrada: O input de palavras diversas feito pelo usuário
Saida: O resultado em relação ao input feito ao usuário, que varia dependendo das palavras digitadas e suas quantidades
*/

int main(){
    
    char texto[1000];

    // Solicitar o texto ao usuário
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    contarPalavrasRepetidas(texto);

    return 0;
}
