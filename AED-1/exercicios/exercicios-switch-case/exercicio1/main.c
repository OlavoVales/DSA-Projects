
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

printf("digite o operador matem�tico que deseja utilizar: ");
scanf(" %c", &simboloOperacao);

switch(simboloOperacao){

case '+':
    resultado = numero1 + numero2;
    printf("a soma de %d com %d � igual a %d", numero1, numero2, resultado);
    break;

case '/':
    resultado = numero1 / numero2;
    printf("a divis�o de %d com %d � igual a %d", numero1, numero2, resultado);
    break;

case '-':
    resultado = numero1 - numero2;
    printf("a subtra��o de %d com %d � igual a %d", numero1, numero2, resultado);
    break;

case '*':
    resultado = numero1 * numero2;
    printf("a multiplica��o de %d com %d � igual a %d", numero1, numero2, resultado);
    break;

}

return 0;

}
