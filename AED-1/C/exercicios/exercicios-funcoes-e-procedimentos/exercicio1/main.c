#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float numero1 = 0, numero2 = 0, resultado = 0;
char simbolo;


void le_numeros(){
    printf("digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("digite o segundo numero: ");
    scanf("%f", &numero2);
}

void soma(){
    resultado = numero1 + numero2;
}

void subtracao(){
    resultado = numero1 - numero2;
}

void divisao(){
    resultado = numero1 / numero2;
}

void multiplicacao(){
    resultado = numero1 * numero2;
}

void escolhaOperacao(){
    printf("digite o simbolo da operação que deseja realizar: ");
    getchar();
    scanf("%c", &simbolo);

    switch(simbolo){
    case '+':
        soma();
    break;
    case '-':
        subtracao();
    break;
    case '*':
        multiplicacao();
    break;
    case '/':
        divisao();
    break;
    default:
        printf("favor digite um simbolo de operação válido.");
    }
}

void Imprime_numeros(){
    printf("o valor do primeiro número é %.2f, o valor do segundo número é %.2f, o simbolo de operação escolhido foi o: %c e o resultado da operação foi: %.2f", numero1, numero2, simbolo, resultado);
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    le_numeros();
    escolhaOperacao();
    Imprime_numeros();

    return 0;
}
