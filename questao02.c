#include <stdio.h>

int main(){
    float e = 1;
    int n = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int numero = i;
        int fatorial = 1;

        while(numero > 0) 
        {
            fatorial *= numero;
            numero--;
        }

        e += 1.0/fatorial;
    }
    printf("O valor de e é: %.6f\n", e);

    return 0;
}
