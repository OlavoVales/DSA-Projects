/* https://replit.com/@olavocastro/exercicio1-lista-5 */

#include <stdio.h>
#include <stdlib.h>

/*
Descrição: a função tem por objetivo armazenar inputs do usuário em uma array e retornar ao usuário tais valores digitados, porém dobrados.
Entrada: vetor de numeros [a, b, c, d, e] 
Saída: vetor de numeros dobrados [a*2, b*2, c*2, d*2, e*2]
*/

int main(){

    float numerosArranjo[5];
    float numerosArranjoDobrados[5];

    for(int i = 0; i < 5; i++){
        printf("digite o %do valor do arranjo: ", i + 1); //realiza a leitura dos inputs
        scanf("%f", &numerosArranjo[i]);// armazena os inputs na array
        numerosArranjoDobrados[i] =  numerosArranjo[i] * 2; //duplica os valores do inputs e os armazena em outra array
    }

    for(int i = 0; i < 5; i++){
        printf("%2.f \n", numerosArranjoDobrados[i]); //mostra ao usuário o resultado obtido
    }

    return 0;
}