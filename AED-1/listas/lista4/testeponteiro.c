#include <stdio.h>

int main(){

    int i = 10;
    int *p = &i;

    printf("%d %d %d %d", i, *p, p, &i);
    return 0;
}