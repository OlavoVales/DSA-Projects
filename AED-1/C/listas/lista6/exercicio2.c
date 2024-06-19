#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *fp;
    char string[10000];
    char *token;
    const char s[2] = ";";
    // const char s[2] = {';', '\0'};

    fp = fopen("arquivo-01.txt", "r");

    if (!fp)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while (fgets(string, 10000, fp) != NULL)
    {

        token = strtok(string, s);

        if (token != NULL)
        {                            // Se o retorno de token der certo entra
            token = strtok(NULL, s); // pra pegar o segundo token
            printf("%s\n", token);
        }
        else
        {
            printf("erro.\n");
        }
    }

    fclose(fp);

    return 0;
}
