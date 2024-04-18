#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int w = 0, x = 0, y = 0, z = 0;
float geometrica = 0.0, ponderada = 0.0, harmonica = 0.0, aritmetica = 0.0;
float pond = 0.0;

printf("digite os 3 numeros inteiros desejados em sequencia: ");
scanf("%d %d %d", &x, &y, &z);

printf("digite o numero correspondente ao tipo de média que deseja realizar, sendo 1: geométrica, 2: ponderada, 3: harmônica e 4: aritmética. ");
scanf("%d", &w);

switch(w){

    case 1:
        geometrica = sqrt(x * y * z); //aqui funciona por causa do sqrt do math.h???
        printf("a média geometrica é: %.2f. ", geometrica); //funcionou
    break;

    case 2:
        ponderada = (float)(x + 2*y + 3*z)/6; //dá b.o no C, pq to transformando um tipo de dado em outro
        printf("a média ponderada é %.2f. ", ponderada);//funcionou
    break;

    case 3:
        harmonica = (float)3/(1/x + 1/y + 1/z); //1,#J
        printf("a média harmonica é %.2f. ", harmonica);
    break;

    case 4:
        aritmetica = (float)(x + y + z)/3;
        printf("a média aritmetica é %.2f. ", aritmetica); //funcionou
    break;
}

return 0;
}
