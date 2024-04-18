#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int qtdProduto = 0;
    float valorProduto = 0.0, totalValorCompra = 0.0;

    printf("informe o valor do produto: ");
    scanf("%f", &valorProduto);

    if (valorProduto < 0 || valorProduto == 0)
    {
        printf("digite um valor válido para o produto. ");
        exit(0);
    }

    printf("digite a quantidade do produto: ");
    scanf("%d", &qtdProduto);

    if (qtdProduto < 0 || qtdProduto == 0)
    {
        printf("digite um valor válido para a quantidade de produtos. ");
        exit(0);
    }

    totalValorCompra = qtdProduto * valorProduto;

    printf("o valor total da compra foi de %.2f reais.", totalValorCompra);

    return 0;
}