#include <stdio.h>

int main(){
    int maior_valor = 0;
    int menor_valor = 0;
    float media = 0;

    int repeticoes = 500; //mudar esse valor pra faaazer testes

    for(int i = 1; i <= repeticoes; i++){

        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero < 0){
            printf("\nNumero negativo é invalido\n\n");
            i--;
        }

        else{
            if(i == 1){
            maior_valor = numero;
            menor_valor = numero;
        }

        if(numero > maior_valor){
            maior_valor = numero;
        }
        else if(numero < menor_valor){
            menor_valor = numero;
        }

        media += numero;
        }

    }
    printf("Maior valor: %d\n", maior_valor);
    printf("Menor valor: %d\n", menor_valor);
    printf("Media valores: %f\n", media / repeticoes);
    
    return 0;
}