#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    char string[10000];
    int contadorLinhas = 0;

    fp = fopen("arquivo-01.txt", "r");

    if (!fp)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while (!feof(fp))
    {
        fgets(string, 10000, fp);
        contadorLinhas += 1;
    }

    printf("o arquivo tem %d linhas", contadorLinhas);

    fclose(fp);

    return 0;
}
