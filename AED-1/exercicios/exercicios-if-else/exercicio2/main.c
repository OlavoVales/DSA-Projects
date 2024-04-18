#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale( LC_ALL, "Portuguese");

int numero;

printf("digite o numero desejado: ");
scanf("%d", &numero);



if(numero % 2 == 0){
printf("o número %d é par. ", numero);
}else{
printf("o número %d é impar. ", numero);
}

if(numero > 0){
printf("o numero %d é positivo. ", numero);
}else{
printf("o numero %d é negativo. ", numero);
}


return 0;

}
