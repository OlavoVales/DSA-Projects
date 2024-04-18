#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char seg_sexta[] = "06:30";
    char sab[] = "08:00";
    char dom[] = "09:00";

    int linha = 0, dia = 0;

    printf("digite a linha desejada: ");
    scanf("%d", &linha);

    if (linha == 0 || linha < 0)
    {
        printf("digite uma linha válida. ");
        exit(0);
    }

    printf("digite um numero de 1 a 7, correspondete a qual dia da semana você deseja saber o horário de partida do onibus: ");
    scanf("%d", &dia);

    if (6 > dia && dia > 0)
    {
        printf("o horário da linha %d é: %s", linha, seg_sexta);
    }
    else if (dia == 6)
    {
        printf("o horário da linha %d é: %s", linha, sab);
    }
    else if (dia == 7)
    {
        printf("o horário da linha %d é: %s", linha, dom);
    }
    else
    {
        printf("digite um dia válido. ");
    }

    return 0;
}