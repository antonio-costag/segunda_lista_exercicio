#include <stdio.h>

int main(){
    int numero = 1;
    int numeros_impares = 0;

    int numeros_pares = 0;
    float media_pares = 0.0;

    float media_geral = 0.0;
    int contador = 0;

    while (numero != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero == 0){
            printf("\nPrograma encerrado\n");
            break;
        }

        if(numero % 2 == 0){
            numeros_pares++;
            media_pares += numero;
        }
        else{
            numeros_impares++;
        }

        media_geral += numero;
        contador++;
    }

    printf("Quantidade de numeros pares: %d\n", numeros_pares);
    printf("Quantidade de numeros impares: %d\n", numeros_impares);

    printf("Media dos numeros pares: %0.2f\n", media_pares / numeros_pares);
    printf("Media dos numeros gerais: %0.2f\n", media_geral / contador);

    return 0;
}