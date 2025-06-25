#include <stdio.h>

int main(){
    int numero = 0;
    float media = 0.0;
    int contador = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("Programa finalizado\n\n");
            printf("A media dos numeros contabilizados é: %.2f\n", media / contador);
            break;
        }

        if(numero % 2 == 0){
            printf("\nNumero contabilizado\n\n");
            media += numero;
            contador++;
        }
        else{
            printf("\nNumero ignorado\n\n");
        }
    }while (numero != 0);

    return 0;
}
