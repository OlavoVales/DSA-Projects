#include <stdio.h>
#include <stdlib.h>

// 3)b)
//procedimento que tem como finalidade trocar de posição os 2 valores dados
void troca(int *x, int *y){ //transformando os parâmetros em ponteiros, recebendo então o endereço da variável e não seu valor.
int aux;
aux= *x; //atribuindo o valor da "variavel" x para aux 
*x = *y; // atribuindo o valor da "variavel" y para x
*y = aux; // atribuindo o valor de aux para y
}//assim senão valor será perdido

int main(){//fornece os inputs base necessários para o procedimento chamado e printa o resultado de tal.

    int a=5,b=2; //declaração das váriaveis

    troca(&a, &b);//uso do procedimento troca(), e principio da declaração de ponteiro, 
                  //onde por exemplo, usando *x, estará pegando o valor da variavel que está no endereço correspondente a &a, *x = &a
                  // aux = *x - > aux = &a -> aux = ENDEREÇO DA MEMORIA da variavel a
                  // *x = *y -> *x = &b -> armazena o VALOR da variavel b em *x
                  // *y = ENDEREÇO DA MEMORIA da variavel a -> *y = &a -> armazena o VALOR da variavel a em *y

    printf("\n%i, %i", a, b); //impressão dos valores das variaveis, nesse caso agora respectivamente 2 e 5

    return 0;
}

// 3)a) 2, 5