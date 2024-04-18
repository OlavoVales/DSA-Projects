#include <stdlib.h>
#include <stdio.h>

int main(){

    int number = 0;
    int highestNumber;
    int lowestNumber;
    int totalBreadth; //(aplitude total)

    for(int i = 0; i < 5; i++){

        printf("type the %d number: ", i+1);
        scanf("%d", &number);

        if(i == 0){//mesmo se estiver dentro do if, a variavel pode ser atribuida algum valor e permanecer pelo resto
            highestNumber = number;//da execucao,mesmo apos o 1a execucao do for, por exemplo.
            lowestNumber = number;//atribui valor aos dois(high e low), não tendo de preocupar com lixo e possibila que lowest seja definido mesmo se não for negativo
        }//                         oque não seria possível possivel caso low fosse igual a 0 na definicao.

        if (number > highestNumber){
            highestNumber = number;
        }

        if(number < lowestNumber){
            lowestNumber = number;
        }

    }

    totalBreadth = highestNumber - lowestNumber;

    printf("the total breadth is: %d", totalBreadth);



    return 0;
}
