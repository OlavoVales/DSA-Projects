#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale( LC_ALL, "Portuguese");

int numero;

printf("digite o numero desejado: ");
scanf("%d", &numero);



if(numero % 2 == 0){
printf("o n�mero %d � par. ", numero);
}else{
printf("o n�mero %d � impar. ", numero);
}

if(numero > 0){
printf("o numero %d � positivo. ", numero);
}else{
printf("o numero %d � negativo. ", numero);
}


return 0;

}
