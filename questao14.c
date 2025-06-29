#include <stdio.h>

int main(){
    int n = 0;
    printf("Digite o numero de valores que devem ser lidos: ");
    scanf("%d", &n);

    float media = 0.0;
    float numeros_positivos = 0.0;
    float numeros_negativos = 0.0;

    for(int i = 0; i < n; i++){
        float numero = 0.0;
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if(numero > 0) {
            numeros_positivos ++;
        } else if(numero < 0) {
            numeros_negativos ++;
        }
        media += numero;
    }
    media /= n;

    printf("Media: %.2f\n", media);
    printf("Quantidade de numeros positivos: %.0f\n", numeros_positivos);
    printf("Quantidade de numeros negativos: %.0f\n\n", numeros_negativos);

    printf("Percentual de numeros positivos: %.2f%%\n", (100 * numeros_positivos) / n);
    printf("Percentual de numeros negativos: %.2f%%\n", (100 * numeros_negativos) / n);
    return 0;
}
