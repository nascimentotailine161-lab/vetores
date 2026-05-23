#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numeros[10];
    int i;
    int pares = 0;
    int impares = 0;

   
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 10; i++) {

        if(numeros[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }

    }

    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    system("pause");
    return 0;
}
