#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
� �
� � setlocale(LC_ALL, "Portuguese");
� �
� � int numero1, numero2;
� �
� � printf("digite o primeiro n�mero: ");
� � scanf("%d", numero1);
� �
� � printf("digite o segundo n�mero: ");
� � scanf("%d", numero2);
� �
� � if(numero1 > numero2){
� � � � printf("o numero %d � maior que o n�mero %d",numero1, numero2);
� � }
� �
� � if(numero2 > numero1){
� � � � printf("o n�mero %d � maior que o n�mero %d",numero2, numero1);
� � }
� �
� � return 0;
}
