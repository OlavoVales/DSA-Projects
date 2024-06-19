#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo;
    
    printf("digite o numero o qual deseja saber a sequencia de fibonacci: ");
    scanf("%d", &n);
    
    printf("sequencia ate o numero %d: \n", n);
    
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            proximo = i;
        else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }
    
    return 0;
}
