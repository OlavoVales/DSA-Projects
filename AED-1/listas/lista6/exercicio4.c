#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

void print_animals_with_age_in_range(const char *filename, int min_age, int max_age)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file))
    {
        char nome_popular[MAX_LINE_LENGTH];
        char nome_cientifico[MAX_LINE_LENGTH];
        char domestico[6];
        int peso;
        int idade_max;

        // Usando sscanf para extrair os dados da linha
        if (sscanf(line, "%[^;];%[^;];%[^;];%d;%d;", nome_popular, nome_cientifico, domestico, &peso, &idade_max) == 5)
        {
            if (idade_max >= min_age && idade_max <= max_age)
            {
                printf("%s\n", nome_popular);
            }
        }
    }

    fclose(file);
}

int main()
{
    const char *filename = "arquivo-01.txt";
    int min_age = 10;
    int max_age = 16;

    print_animals_with_age_in_range(filename, min_age, max_age);

    return 0;
}
