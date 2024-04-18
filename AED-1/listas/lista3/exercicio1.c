#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float litros = 0.0, distanciaPercorrida = 0.0, consumoMedio = 0.0;

    printf("informe a quantidade de litros abastecidos no automóvel: ");
    scanf("%f", &litros);

    if (litros <= 0)
    {
        printf("Digite uma quantidade de litros abastecidos válida. ");
        exit(0);
    }

    printf("informe a quantidade de quilômetros percorridos pelo automóvel: ");
    scanf("%f", &distanciaPercorrida);

    if (distanciaPercorrida <= 0)
    {
        printf("Digite uma quilometragem válida. ");
        exit(0);
    }

    consumoMedio = distanciaPercorrida / litros;

    printf("O consumo médio do automóvel em quilometros por litro(km/l), foi de: %.2f", consumoMedio);

    return 0;
}