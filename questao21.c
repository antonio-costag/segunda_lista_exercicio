#include <stdio.h>

int main(){
    int numero = 0;
    int produto_pares = 1;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("\nPrograma finalizado\n");
            break;
        }

        if(numero % 2 == 0){
            produto_pares *= numero;
        }

    }while (numero != 0);

    printf("O produto dos numeros pares é: %d", produto_pares);

    return 0;
}