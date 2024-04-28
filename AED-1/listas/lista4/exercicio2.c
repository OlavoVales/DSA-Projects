#include <stdio.h>
#include <stdlib.h>

void introducao(){
    printf("Programa para realizar soma de 2 numeros reais! \n"); //procedimento que apresenta o programa
}

float soma(float num1, float num2){ //função que recebe os dois valores por parametro e retorna a sua soma

    float soma = num1 + num2;   //REVISAR COM GABRIEL  //REVISAR COM GABRIEL  //REVISAR COM GABRIEL  //REVISAR COM GABRIEL  //REVISAR COM GABRIEL  //REVISAR COM GABRIEL 

    return soma;
}

void inputs(float n1, float n2){ // procedimento que recebe a função e a escreve na tela

    float resultado = soma(n1, n2);

    printf("o resultado da soma é %2.f", resultado);
}



int main () { // função responsavel por organizar o fluxo dos outros processos

    float numero1, numero2;

    introducao();

    printf("digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("digite o segundo número: ");
    scanf("%f", &numero2);

    soma(numero1, numero2);

    inputs(numero1, numero2);

    return 0;
}