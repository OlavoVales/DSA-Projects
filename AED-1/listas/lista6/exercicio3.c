#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *inputFile, *outputFile;
    char line[256];
    float weight, maxWeight = 0, minWeight = 0, totalWeight = 0;
    int count = 0;
    int first = 1;

    inputFile = fopen("arquivo-01.txt", "r");
    if (inputFile == NULL)
    {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Processar cada linha do arquivo
    while (fgets(line, sizeof(line), inputFile))
    {
        char *token;
        int column = 0;

        // Dividir a linha em tokens
        token = strtok(line, ";");
        while (token != NULL)
        {
            column++;
            if (column == 4)
            {
                weight = atof(token);
                totalWeight += weight;
                count++;
                if (first)
                {
                    maxWeight = minWeight = weight;
                    first = 0;
                }
                else
                {
                    if (weight > maxWeight)
                        maxWeight = weight;
                    if (weight < minWeight)
                        minWeight = weight;
                }
            }
            token = strtok(NULL, ";");
        }
    }

    fclose(inputFile);

    // Calcular a média de peso
    float averageWeight = totalWeight / count;

    // Escrever os resultados no arquivo de saída
    outputFile = fopen("saida.txt", "w");
    if (outputFile == NULL)
    {
        perror("Erro ao abrir o arquivo de saída");
        return 1;
    }

    fprintf(outputFile, "Peso máximo: %.2f\n", maxWeight);
    fprintf(outputFile, "Peso mínimo: %.2f\n", minWeight);
    fprintf(outputFile, "Peso médio: %.2f\n", averageWeight);

    fclose(outputFile);

    return 0;
}
