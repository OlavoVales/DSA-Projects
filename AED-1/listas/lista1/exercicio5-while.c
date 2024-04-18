#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor = 0.0;
    float juros = 0.0;
    int meses = 0;
    float taxaJurosFormatada = 0.0;  
    float valorBase = 0.0;
    float valorTotal = 0.0;                  
    float apenasJuros = 0.0;

    printf("digite o valor do investimento: ");
    scanf("%f", &valor);
    printf("digite a porcentagem de juros desejados: ");
    scanf("%f", &juros);
    printf("digite a quantidade de meses que planeja mante-lo: ");
    scanf("%d", &meses);

    if(valor <= 0){
        printf("digite um valor positivo. ");
    }
    
    if(juros <= 0){
        printf("digite uma porcentagem de juros positiva. ");
    }
    
    if(meses <= 0){
        printf("digite uma quantidade de meses positiva. ");
    }
    
    if(valor > 0 && juros > 0 && meses > 0){

        taxaJurosFormatada = (juros / 100) + 1;

        valorBase = valor;

        valorTotal = valor * taxaJurosFormatada;

        while(meses > 1){        

            valorTotal = valorTotal * taxaJurosFormatada;

            meses--;
        }
    
        apenasJuros =  valorTotal - valorBase;

        printf("o valor total acumulado foi: %f e o valor de juros foi %f", valorTotal, apenasJuros);

        //for(inicializacao(atribuicao); teste(condicao); incremento(adicao))

    }

    return 0;
}