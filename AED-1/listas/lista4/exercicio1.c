/* https://replit.com/@olavocastro/exercicio1-lista-4 */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculo_idade(int dias, int meses, int anos){ //função feita para utilizar dos inputs feitos pelos usuários na função main, para calcular,
    int soma;                                     //os dias, meses e anos de vida da pessoa em questão.
    dias = dias;
    meses = meses * 30;
    anos = anos * 360;
    soma = anos + meses + dias;

    return soma;
}

int main (){ //função main responsavel por captar os inputs e utilizar da função anterior para imprimir o resultado

    setlocale(LC_ALL, "Portuguese");

    int dias, meses, anos, resultado;

    printf("digite quantos dias de idade você tem: ");
    scanf("%d", &dias);
    printf("digite quantos meses de idade você tem: ");
    scanf("%d", &meses);
    printf("digite quantos anos de idade você tem: ");
    scanf("%d", &anos);

    resultado = calculo_idade(dias, meses, anos);

    printf("quantidade de dias que vocÊ viveu é: %d", resultado);

    /*
    if (anos > -1 || meses > -1 || anos > -1){
            
        resultado = calculo_idade(dias, meses, anos);

        printf("quantidade de dias que vocÊ viveu é: %d", resultado);
        
    }else{
        printf("digite valores válidos. ");
    }
    */
   
    return 0;
}