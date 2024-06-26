/*B Documente cada uma das funções/procedimentos por meio comentários*/

/*
Descrição: a função tem por objetivo calcula o cubo de n.
Entrada: n (inteiro)
Saída: inteiro
*/
int cubo(int n) {
return n*n*n;
}

/*C -> Veja exemplo de código para leitura de frase (string longa com espaços) e armazenamento em vetor de char.*/

/*
char frase[60];
scanf(" %[^\n]", &frase); // opção para leitura sem problema com espaços
fflush(stdin);
printf("%s", frase);
*/

/*D -> Caso necessite, veja um exemplo de uso da Função rand para geração de número aleatórios entre 0 e 99. */

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // comando para gerar numeros aleatorios diferentes 
    srand(time(0));

    printf("\nDez numeros aleatorios entre 0 e 99: ");
    for(int i=0; i<10; i++)
        printf("%i", rand() % 100);
    return 0;
}
*/