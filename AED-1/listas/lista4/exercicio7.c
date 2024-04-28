#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int resultado(int numResultado){
    printf("o segundo maior valor é: %d\n", numResultado);
}

void ordernacao(int num1, int num2, int num3){
    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3))
        resultado(num1);
    else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3))
        resultado(num2);
    else
        resultado(num3);
}

void proced_param_por_valor(int num1, int num2, int num3){
    ordernacao(num1, num2, num3);
}

int func_param_por_valor(int num1, int num2, int num3){

    ordernacao(num1, num2, num3);

    return 0;
}

void proced_valores_por_param(int *num1, int *num2, int *num3){

    ordernacao(*num1, *num2, *num3);
}
int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;

    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("digite o terceiro numero: ");
    scanf("%d", &numero3);

    printf("proced_param_por_valor: ");proced_param_por_valor(numero1,numero2,numero3);
    printf("func_param_por_valor: ");func_param_por_valor(numero1,numero2,numero3);
    printf("proced_valores_por_param: ");proced_valores_por_param(&numero1,&numero2,&numero3);

    return 0;
}