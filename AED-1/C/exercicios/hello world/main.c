#include <stdio.h> // biblioteca padr�o de entrada e saida
#include <stdlib.h> //biblioteca inicial, usada pra puxar as outras
#include <locale.h> //biblioteca de acentos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor1, valor2, soma;//declarar valor1 e valor2 numerico //reservei 2 espa�os, tipo int, na memoria do computador

    // Inicio entrada de dados
    printf("Digite o primeiro valor:\n"); //imprima "Digite o primeiro valor:\n"
    scanf("%f", &valor1); //scanf("identifica��o do tipo", &referencia ponteiro \\d = int, f = float
    printf("\r Digite o segundo valor:\n");
    scanf("%f", &valor2); // pra adressar o resultado da express�o anterior e identificar na mem�ria
    // Fim entrada de dados

    // Inicio processamento
    soma = valor1 + valor2;
    // Fim processamento

    // Inicio sa�da de dados
    printf("A soma dos n�meros �: %.2f", soma); // .x, adiciona a quantidade de casas decimais ap�s o numero inteiro
    // Fim saida de dados
    return 0;
}
