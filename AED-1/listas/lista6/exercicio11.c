#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANIMAIS 100

// Definição da estrutura para representar um animal
struct Animal
{
    char especie[50];
    char nome_cientifico[50];
    char domestico[6]; // true ou false
    int peso;
    int expectativa_vida;
};

// Procedimento para ler o arquivo e preencher a estrutura com as informações dos animais
void lerArquivoPreencherEstrutura(const char *nomeArquivo, struct Animal animais[], int *numAnimais)
{
    FILE *arquivo;
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    *numAnimais = 0;

    while (!feof(arquivo) && *numAnimais < MAX_ANIMAIS)
    {
        fscanf(arquivo, "%[^;];%[^;];%[^;];%d;%d;\n", animais[*numAnimais].especie, animais[*numAnimais].nome_cientifico, animais[*numAnimais].domestico, &animais[*numAnimais].peso, &animais[*numAnimais].expectativa_vida);
        (*numAnimais)++;
    }

    fclose(arquivo);
}

int main()
{
    struct Animal animais[MAX_ANIMAIS];
    int numAnimais, i;

    lerArquivoPreencherEstrutura("arquivo-01.txt", animais, &numAnimais);

    printf("Informacoes dos animais:\n");
    for (i = 0; i < numAnimais; i++)
    {
        printf("Especie: %s, Nome cientifico: %s, Domestico: %s, Peso: %d, Expectativa de vida: %d\n",
               animais[i].especie, animais[i].nome_cientifico, animais[i].domestico, animais[i].peso, animais[i].expectativa_vida);
    }

    return 0;
}
