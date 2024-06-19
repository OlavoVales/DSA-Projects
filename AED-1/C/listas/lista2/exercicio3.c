#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int valor = 0;
    char estado;

    printf("digite o valor da aliquota: ");
    scanf("%d", &valor);

    fflush(stdin); // limpar o buffer, sempre que trabalhar com char ou string
    printf("digite a letra que representa o estado desejado: ");
    scanf("%c", &estado);

    switch(estado){

        case 'M':
        valor = valor * 1.07;
        printf("o valor do aliquota em Minas Gerais sera: %d", valor);
        break;

        case 'S':
        valor = valor * 1.12;
        printf("o valor do aliquota em Sao Paulo sera: %d", valor);
        break;

        case 'R':
        valor = valor * 1.15;
        printf("o valor do aliquota no Rio de Janeiro sera: %d", valor);
        break;

        case 'E':
        valor = valor * 1.08;
        printf("o valor do aliquota no Espirito Santo sera: %d", valor);
        break;

        default:
        printf("digite um caractere valido para representar o estado da regiao sudeste ( M, S, R ou E).");
    }

return 0;
}
