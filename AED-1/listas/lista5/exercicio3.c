#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/*
Descrição: o procedimento tem como objetivo armazenar 10 números aleátorios de 10 a 20 em cada um dos 2 vetores.
Entrada: Números aleátorios gerados pelo método rand().
Saida: 2 vetores preenchidos com 10 números aleátorio de 10 a 20.
*/


void preencheValores(int x[], int y[]){

    srand(time(0));

    for(int i = 0; i < 10; i++){
        // int numeroAleatorio = rand() % 11 + 10; NAO FUNCIONA PQ BOTA O MESMO NUMERO PRAS 2
        x[i] = rand() % 11 + 10; //gera 1 número aleatorio pra cada.
        y[i] = rand() % 11 + 10; //gera 1 número aleatorio pra cada.
    }

    for(int i = 0; i < 10; i++){
        printf("o %do elemento de x eh %d.\n", i + 1, x[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("o %do elemento de y eh %d.\n", i + 1, y[i]);
    }
}

/*
Descrição: Procedimento que tem como função usar dos 2 vetores preenchidos no método anterior, para preencher um novo vetor, 
que suporta 20 ints, de forma intercalada, onde os valores do vetor x serão armazenados nas posições impares do novo vetor,
enquanto os valores do vetor y serão armazenadas nas posições pares do novo vetor.

Entrada: Vetores Preenchidos anteriormente (x e y)
Saida: vetor preenchido (z) de forma intercalada com base nos 2 vetores preenchidos pelo método anterior
*/

void intercala(int x[], int y[], int z[]){

    int j = 0; // variavel que faz possivel o incremento do número da posição do vetor X
    int k = 0; // variavel que faz possivel o incremento do número da posição do vetor Y

    for(int i = 0; i < 20; i++){

        if(i % 2 == 1){

            z[i] = x[j]; //adiciona o valor do numero presente na posição do vetor X, no vetor Z, com base na condição acima.

            printf("o %do valor de z eh %d, que corresponde ao %do valor de x.\n", i + 1, z[i], j + 1); //diz o número armazenado na posição correspondente da posição do vetor Z, 
            //além da informação sobre qual respectivamente é sua posição no vetor base usado.
            
            j++;

        }else if(i % 2 == 0){

            z[i] = y[k]; //adiciona o valor do numero presente na posição do vetor Y, no vetor Z, com base na condição acima.

            printf("o %do valor de z eh %d, que corresponde ao %do valor de y.\n", i + 1, z[i], k + 1); //diz o número armazenado na posição correspondente da posição do vetor Z,
            //além da informação sobre qual respectivamente é sua posição no vetor base usado.

            k++;

        }
    }
}

/*
Descrição: Função onde são adicionados os metodos e valores base para funcionamento do programa

Entrada: vetores x, y e z.
Saida: Execução do programa tendo como retorno os 2 vetores iniciais preenchidos e posteriormente outro vetor preenchido de forma intercalada com base nos números
dos dois outros vetores citados anteriormente.
*/

int main(){

    int x[10], y[10], z[20];

    preencheValores(x, y);
    intercala(x, y, z);

    return 0;
}
