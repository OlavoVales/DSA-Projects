#include <stdio.h>
#include <stdlib.h>

/*
Descrição: o procedimento tem como objetivo armazenar as notas dos alunos, dentro de um vetor
Entrada: notas do alunos sendos atribuidas 1 a 1 nos indices respectivos
Saída: notas dos alunos armazenadas nos indices respectivos
*/

void preencheNotas(int tam, int vetor[]){ //

    for (int i = 0; i < 10; i++){
        printf("digite a nota do %d aluno: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

/*
Descrição: procedimento responsável por calcular a média dos alunos
Entrada: os valores correspondentes aos indices de vetor
Saida: os valores correspondentes aos indices de vetor armazenasdos em uma variavel, que tem seu resultado dividido pela quantidade de indices,
retornando assim a média das notas, além dum bloco condicional responsavel por contabilzar os alunos que tiveram média maior a 6.
*/

void calculaMedia(int tam, int *vetor){

    int valores = 0.0;
    float media = 0.0;
    int acimaMedia = 0;

    for(int i = 0; i < 10; i++){

        valores += vetor[i];

        if(vetor[i] > 6){
            acimaMedia++;
        }
    }

    media = (float)valores/10; //se o valores fosse int sem (float) o retorno ia ser int, por isso media n�o daria
    printf("a media da sala eh: %.2f\n", media);
    printf("a quantidade de alunos que tiveram notas acima da media eh %d", acimaMedia);

}

/*
Descrição: Função principal da aplicação, onde são adicionados procedimentos e variaveis para nutri-los
Entrada: Variaveis declaradas com valores base e procedimentos
Saída: Execução do programa, tendo como retorno os fluxos determinados nos procedimentos
*/

int main(){

    int tam = 10, vetor[10];

    preencheNotas(tam, vetor);
    calculaMedia(tam, &vetor);

    return 0;
}
