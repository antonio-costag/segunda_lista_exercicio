#include <stdio.h>

int main(){
    int n = 0;
    printf("Digite um numero inteiro positivo (N): ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int numero = i;
        int fatorial = 1;

        while(numero > 0) 
        {
            fatorial *= numero;
            numero--;
        }

        printf("Fatorial de %d: %d\n", i, fatorial);
    }

    return 0;
}