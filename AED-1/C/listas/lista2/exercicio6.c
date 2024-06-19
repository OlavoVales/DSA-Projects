#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int primeiroNumero = 0;
    int segundoNumero = 0;
    int terceiroNumero = 0;

    printf("digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    printf("digite o terceiro numero: ");
    scanf("%d", &terceiroNumero);

    if((primeiroNumero <= 0 || segundoNumero <= 0) || (primeiroNumero <= 0 && segundoNumero <= 0)){
        printf("Valor inválido. ");
    }else if(terceiroNumero % segundoNumero == 0 && terceiroNumero % primeiroNumero == 0){
        printf("Divisível por ambos. ");
    }else if(terceiroNumero % segundoNumero == 0 || terceiroNumero % primeiroNumero == 0){
        printf("Divisível por um. ");
    }else if(terceiroNumero % segundoNumero > 0 && terceiroNumero % primeiroNumero > 0){
        printf("Não é divisível. ");
    }
    
    return 0;
}