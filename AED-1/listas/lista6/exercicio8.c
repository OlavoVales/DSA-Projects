#include <stdio.h>

int main()
{
    FILE *arquivoTexto, *arquivoBinario;
    char linha[100];

    // Abre o arquivo de texto para leitura
    arquivoTexto = fopen("arquivo-02.txt", "r");
    if (arquivoTexto == NULL)
    {
        printf("Erro ao abrir o arquivo de texto.\n");
        return 1;
    }

    // Abre o arquivo binário para escrita
    arquivoBinario = fopen("arquivo-02.bin", "wb");
    if (arquivoBinario == NULL)
    {
        printf("Erro ao criar o arquivo binário.\n");
        fclose(arquivoTexto);
        return 1;
    }

    // Lê cada linha do arquivo de texto e escreve no arquivo binário
    while (fgets(linha, sizeof(linha), arquivoTexto) != NULL)
    {
        int valor1, valor2;
        sscanf(linha, "%d;%d;", &valor1, &valor2);
        fwrite(&valor1, sizeof(int), 1, arquivoBinario);
        fwrite(&valor2, sizeof(int), 1, arquivoBinario);
    }

    // Fecha os arquivos
    fclose(arquivoTexto);
    fclose(arquivoBinario);

    printf("Cópia do arquivo-02.txt para arquivo-02.bin realizada com sucesso.\n");

    return 0;
}
