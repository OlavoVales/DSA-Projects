#include <stdio.h>
#include <stdlib.h>

int main(){

    float miliSec = 0.0;
    char planeta;
    float terra = 0, venus = 0, mercurio = 0;

    printf("digite a quantidade milisegundos de queda: ");
    scanf("%f", &miliSec);

    float miliSecFormatado = (miliSec/1000);

    fflush(stdin);
    printf("digite o caracter que representa o planeta onde a queda ocorreu: ");
    scanf("%c", &planeta);

    if(miliSec <= 0){
        printf("o tempo informado deve ser maior que 0.");
    }

    switch (planeta){

        case 'T':
            terra = 9.807 * miliSecFormatado;
            printf("a velocidade de queda do corpo na terra foi de: %f. ", terra);
        break;

        case 'V':
            venus = 8.87 * miliSecFormatado;
            printf("a velocidade de queda do corpo em venus foi de: %f. ", venus);
        break;

        case 'M':
            mercurio = 3.7 * miliSecFormatado;
            printf("a velocidade de queda do corpo em mercurio foi de: %f. ", mercurio);
        break;
    }

    return 0;
}