#include <stdio.h>

int main(){
    int numero = 0;
    int soma_negativos = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("\nPrograma finalizado\n");
            break;
        }

        if(numero < 0){
            soma_negativos += numero;
        }

    }while (numero != 0);

    printf("A soma dos numeros negativos é: %d", soma_negativos);

    return 0;
}
