#include <stdio.h>

int main(){
    int numero;
    float soma = 0.0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        float termo = 1.0 / i;

        printf("%f\n", termo);
        soma += termo;
    }

    printf("\nSoma: %f", soma);
    return 0;
}