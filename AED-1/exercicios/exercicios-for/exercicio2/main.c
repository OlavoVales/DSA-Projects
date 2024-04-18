#include <stdio.h> //this header file imports different variables, macros, and functions to perform input and output operations.
#include <stdlib.h> //provides several functions for performing various tasks, including memory allocation,
                    //string manipulation, mathematical operations, and more.
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int maior;
    int menor;
    int numero = 0;

    for(int contagem=0;contagem < 15;contagem++){

        printf("digite o número %d: ",contagem);
        scanf("%d",&numero);

        if(maior < numero){
            maior = numero;
        }

        if(menor > numero){
            menor = numero;
        }
    }

    printf("o maior numero é: %d e o menor numero é: %d", maior, menor);

    return 0;
}
