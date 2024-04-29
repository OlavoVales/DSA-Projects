/* https://replit.com/@olavocastro/exercicio4-lista-4 */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculo_idade(int *ponteiro_dias,int *ponteiro_meses, int *ponteiro_anos){ //função feita para utilizar dos inputs feitos pelos usuários na função main, para calcular,                                  
    *ponteiro_dias = *ponteiro_dias;                                           //o valor que será representado em relação a localização da variavel, em dias, meses e anos.                                   
    *ponteiro_meses = *ponteiro_meses * 30;
    *ponteiro_anos = *ponteiro_anos * 360;
    
    return 0;
}

int main (){ //função responsavél pelos inputs dos usuários, utilizando também da logica da declaração de ponteiro, exemplo: *ponteiros_dias = &dias.

    setlocale(LC_ALL, "Portuguese");

    int dias, meses, anos, resultado;

    printf("digite quantos dias de idade você tem: ");
    scanf("%d", &dias);
    printf("digite quantos meses de idade você tem: ");
    scanf("%d", &meses);
    printf("digite quantos anos de idade você tem: ");
    scanf("%d", &anos);

    calculo_idade(&dias, &meses, &anos);

    resultado = dias + meses + anos;

    printf("quantidade de dias que vocÊ viveu é: %d", resultado);
   
    return 0;
}