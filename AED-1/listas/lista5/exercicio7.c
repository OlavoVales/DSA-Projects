/*https://replit.com/@olavocastro/exercicio7-lista-5*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Descrição: Função que tem como função transformar as letras minusculas digitadas no input do usuário e retornar esse input porém agora com todas as letras maisculas
Entrada: O input de palavras feito pelo usuário
Saida: o retorno para a função principal com o resultado dado
*/

char* stringMaiscula(char *vetor, int tamanho){

    char *novaString = (char*) malloc(tamanho * sizeof(char)); 
    
    for(int i = 0; i < tamanho; i++){
        novaString[i] = toupper(vetor[i]); // toupper() = converte o caractere para maisculo
    }
    
    return novaString;
}

/*
Descrição: Função principal que tem como função receber o input do usuário e chamar a função stringMaiscula()
Entrada: O input de palavras feito pelo usuário
Saida: o input feito pelo usuário porém com letras maiscula
*/

int main(){

    char texto[1000];
    
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    
    int tamanho = 0;

    while(texto[tamanho] != '\0'){
        tamanho++;
    }
    
    // Chamar a função para converter o texto para maiúsculo
    char *textoMaiusculo = stringMaiscula(texto, tamanho);
    
    printf("Texto convertido para maiusculo: %s\n", textoMaiusculo);
    
    free(textoMaiusculo);
    
    return 0;
}
