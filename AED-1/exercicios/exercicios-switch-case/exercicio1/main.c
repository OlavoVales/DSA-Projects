
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int numero1, numero2, resultado;

char simboloOperacao;

printf("digite o primeiro valor: ");
scanf("%d", &numero1);

printf("digite o segundo valor: ");
scanf("%d", &numero2);

printf("digite o operador matemático que deseja utilizar: ");
scanf(" %c", &simboloOperacao);

switch(simboloOperacao){

case '+':
    resultado = numero1 + numero2;
    printf("a soma de %d com %d é igual a %d", numero1, numero2, resultado);
    break;

case '/':
    resultado = numero1 / numero2;
    printf("a divisão de %d com %d é igual a %d", numero1, numero2, resultado);
    break;

case '-':
    resultado = numero1 - numero2;
    printf("a subtração de %d com %d é igual a %d", numero1, numero2, resultado);
    break;

case '*':
    resultado = numero1 * numero2;
    printf("a multiplicação de %d com %d é igual a %d", numero1, numero2, resultado);
    break;

}

return 0;

}
