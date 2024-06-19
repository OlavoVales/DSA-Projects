#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sayHello();

char *sayHello(){
    char *salutation;

    salutation = (char *)malloc(6 * sizeof(char));

    strcpy(salutation, "hello");
    
    return salutation;
}

int main(){

    printf("%s\n", sayHello());

    return 0;
}

