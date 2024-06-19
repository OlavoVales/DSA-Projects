#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char string[1000];
    int tamanhoString;

    printf("digite a string desejada: ");
    scanf("%s", string);

    tamanhoString = strlen(string);

    printf("a string digita tem %d caracteres.", tamanhoString);
}