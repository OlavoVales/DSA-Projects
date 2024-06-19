#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int entrada = 0, saida = 0, total = 0, paradas = 0;

    printf("informe o numero de paradas que o motorista realizará: ");
    scanf("%d", &paradas);

    if (paradas < 1)
    {
        printf("digite um numero positivo de paradas. ");
        exit(0);
    }

    for (int i = 0; i < paradas; i++)
    {
        printf("informe quantos passageiros entraram na %da parada: ", i + 1);
        scanf("%d", &entrada);

        if (entrada < 0)
        {
            printf("Digite um número positivo de passageiros. ");
            exit(0);
        }

        total += entrada;

        printf("informe quantos passageiros sairam na %da parada: ", i + 1);
        scanf("%d", &saida);

        if (saida < 0)
        {
            printf("Digite um número positivo de passageiros. ");
            exit(0);
        }

        total -= saida;
    }

    printf("o total de passageiros no ônibus após todas as paradas é: %d", total);

    return 0;
}