#include <stdio.h>
#include <stdlib.h>

int calculaTamanhoString(char *str) {

    if (*str == '\0') {
        return 0;
    }

    return 1 + calculaTamanhoString(str + 1);
}

int main() {
    char string[1000];
    int tamanhoString;

    printf("Digite a string desejada: ");
    scanf("%s", string);

    tamanhoString = calculaTamanhoString(string);

    printf("A string digitada tem %d caracteres.\n", tamanhoString);

    return 0;
}
