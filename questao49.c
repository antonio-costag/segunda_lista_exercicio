#include <stdio.h>

int main(){
    int n;

    do{
        printf("Digite um valor N inteiro e positivo: ");
        scanf("%d", &n);

        if(n < 0){
            printf("\n[ERRO] valor invalido\n\n");
        }
    }
    while (n < 0);

    int numero = n;
    int fatorial = 1;

    while(numero > 0) 
    {
        fatorial *= numero;
        numero--;
    }

    printf("O fatyorial de %d: (%d!), é: %d", n, n, fatorial);
    
    return 0;
}