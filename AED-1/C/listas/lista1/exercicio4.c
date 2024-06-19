#include <stdio.h>
#include <stdlib.h>

int main(){

    int votosBrancos = 0;
    int votosNulos = 0;
    int votosValidos = 0;
    float totalVotos = 0;
    float porcentagemBrancos = 0.0;
    float porcentagemNulos = 0.0;
    float porcentagemValidos = 0.0;

    printf("digite a quantidade de votos em branco: ");
    scanf("%d", &votosBrancos);

    printf("digite a quantidade de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("digite a quantidade de votos validos: ");
    scanf("%d", &votosValidos);

    if(votosBrancos < 0){
        printf("digite a quantidade correta de votos brancos. ");
    }

    if(votosNulos < 0){
        printf("digite a quantidade correta de votos nulos. ");
    }
    
    if(votosValidos < 0){
        printf("digite a quantidade correta de votos validos. ");
    }    

    if(votosBrancos > 0 || votosNulos > 0 || votosValidos > 0){

        totalVotos = votosBrancos + votosNulos + votosValidos;

        porcentagemBrancos = (votosBrancos / totalVotos)*100;
        porcentagemNulos = (votosNulos / totalVotos)*100;
        porcentagemValidos = (votosValidos / totalVotos)*100;

        printf("os votos brancos representam %.2f por cento do total de votos, os nulos representam %.2f e os validos representam %.2f.", porcentagemBrancos, porcentagemNulos, porcentagemValidos);

    }

    return 0;

}