#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (!isalnum(caractere)) {
        printf("O caractere '%c' eh especial.\n", caractere);
    } else {
        printf("O caractere '%c' nao eh especial.\n", caractere);
    }

    return 0;
}
