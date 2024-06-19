#include <stdio.h>

int main()
{
    FILE *arquivo_original, *arquivo_copia;
    char linha[1000];

    // Abre o arquivo original para leitura
    arquivo_original = fopen("arquivo-01.txt", "r");
    if (arquivo_original == NULL)
    {
        printf("Erro ao abrir o arquivo original.\n");
        return 1;
    }

    // Abre o arquivo de cópia para escrita
    arquivo_copia = fopen("arquivo-01_copia.txt", "w");
    if (arquivo_copia == NULL)
    {
        printf("Erro ao criar o arquivo de cópia.\n");
        fclose(arquivo_original);
        return 1;
    }

    // Copia linha por linha do arquivo original para o arquivo de cópia
    while (fgets(linha, sizeof(linha), arquivo_original) != NULL)
    {
        fputs(linha, arquivo_copia);
    }

    // Fecha os arquivos
    fclose(arquivo_original);
    fclose(arquivo_copia);

    printf("Cópia do arquivo realizada com sucesso.\n");

    return 0;
}
