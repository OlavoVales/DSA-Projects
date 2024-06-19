#include <stdio.h>
#include <stdlib.h>

// Só consegui fazer quando pra numero positivo e se caso o usuário nao digitar 0 pra validação de mesmo número

int main (){

    int number = 0;
    int highestNumber = 0;
    int middleNumber = 0;
    int lowestNumber = 0;

    for(int i = 0; i < 3; i++){

        printf("type the %d number: ", i+1); //i+1 não adiciona valor a i no for, porém adiciona valor visual no printf
        scanf("%d", &number);

        if(number == highestNumber || number == middleNumber || number == lowestNumber){
            printf("dont type the same number more than once.");
            i = 5;
        }

        if(number > highestNumber){

            lowestNumber = middleNumber; //do meio se torna o do menor //definido na terceira execução do for
            middleNumber = highestNumber; //maior se torna o do meio //definido na terceira execução do for
            highestNumber = number; //maior se torna o novo input //definido na terceira execução do for

        }else if(number < highestNumber && number < middleNumber){

            lowestNumber = number;

        }else if(number < highestNumber && number > lowestNumber){

            middleNumber = number;
        }

    }

    if(highestNumber != middleNumber && middleNumber != lowestNumber && lowestNumber != highestNumber) {
        printf("the highiest number is: %d, the middle number is: %d and the lowest number is %d.", highestNumber, middleNumber, lowestNumber);

    }

    return 0;
}
