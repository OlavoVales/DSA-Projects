#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar informações dos felinos
typedef struct
{
    char nome[50];
    char especie[50];
    int domestico;
    int pesoMin;
    int pesoMax;
} Felino;

int main()
{
    FILE *arquivo1, *arquivo2, *arquivo3;
    Felino felinos[100];
    int intervalos[100][2];
    int numFelinos = 0, numIntervalos = 0;

    // Abrindo e lendo o arquivo-01.txt
    arquivo1 = fopen("arquivo-01.txt", "r");
    if (arquivo1 == NULL)
    {
        printf("Erro ao abrir o arquivo-01.txt\n");
        return 1;
    }

    while (fscanf(arquivo1, "%[^;];%[^;];%d;%d;%d;\n", felinos[numFelinos].nome, felinos[numFelinos].especie,
                  &felinos[numFelinos].domestico, &felinos[numFelinos].pesoMin, &felinos[numFelinos].pesoMax) != EOF)
    {
        numFelinos++;
    }
    fclose(arquivo1);

    // Abrindo e lendo o arquivo-02.txt
    arquivo2 = fopen("arquivo-02.txt", "r");
    if (arquivo2 == NULL)
    {
        printf("Erro ao abrir o arquivo-02.txt\n");
        return 1;
    }

    while (fscanf(arquivo2, "%d;%d;\n", &intervalos[numIntervalos][0], &intervalos[numIntervalos][1]) != EOF)
    {
        numIntervalos++;
    }
    fclose(arquivo2);

    // Abrindo o arquivo-03.txt para escrita
    arquivo3 = fopen("arquivo-03.txt", "w");
    if (arquivo3 == NULL)
    {
        printf("Erro ao abrir o arquivo-03.txt\n");
        return 1;
    }

    // Comparando os felinos com os intervalos e salvando os resultados no arquivo-03.txt
    for (int i = 0; i < numIntervalos; i++)
    {
        int min = intervalos[i][0];
        int max = intervalos[i][1];
        fprintf(arquivo3, "Intervalo %d-%d:\n", min, max);
        for (int j = 0; j < numFelinos; j++)
        {
            if (felinos[j].pesoMax >= min && felinos[j].pesoMax <= max)
            {
                fprintf(arquivo3, "  %s\n", felinos[j].nome);
            }
        }
    }

    fclose(arquivo3);

    return 0;
}
