#include <stdio.h>

int main(){
    int numero = 0;
    int numero_0_25 = 0;
    int numero_26_50 = 0;
    int numero_51_75 = 0;
    int numero_76_100 = 0;
    while (numero >= 0)
    {
        printf("Digite um numero inteiro positivo (negativo para finalizar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("\nPrograma finalizado\n\n");
            break;
        }

        if (numero >= 0 && numero <= 25) {
            numero_0_25++;
        } else if (numero >= 26 && numero <= 50) {
            numero_26_50++;
        } else if (numero >= 51 && numero <= 75) {
            numero_51_75++;
        } else if (numero >= 76 && numero <= 100) {
            numero_76_100++;
        }
        else{
            printf("Numero fora do intervalo [0,100]\n");
        }
    }
    
    printf("Quantidade de numeros entre [0, 25]: %d\n", numero_0_25);
    printf("Quantidade de numeros entre [26, 50]: %d\n", numero_26_50);
    printf("Quantidade de numeros entre [51, 75]: %d\n", numero_51_75);
    printf("Quantidade de numeros entre [76, 100]: %d\n", numero_76_100);
    
    return 0;
}