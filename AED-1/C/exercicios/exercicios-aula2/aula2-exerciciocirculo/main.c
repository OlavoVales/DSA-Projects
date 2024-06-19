#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   
    setlocale(LC_ALL, "Portuguese");
   
    int numero1, numero2;
   
    printf("digite o primeiro número: ");
    scanf("%d", numero1);
   
    printf("digite o segundo número: ");
    scanf("%d", numero2);
   
    if(numero1 > numero2){
        printf("o numero %d é maior que o número %d",numero1, numero2);
    }
   
    if(numero2 > numero1){
        printf("o número %d é maior que o número %d",numero2, numero1);
    }
   
    return 0;
}
