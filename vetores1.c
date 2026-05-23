#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float numeros[10];
    int i;
    float soma = 0;
    float media = 0.0;

    for(i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
    }

    for(i = 0; i < 10; i++) {
        soma = soma + numeros[i];
    }

    media = soma / 10;

    printf("\nSoma total: %f\n", soma);
    printf("Media dos numeros: %.2f\n", media);

    system("pause");
    return 0;
}
