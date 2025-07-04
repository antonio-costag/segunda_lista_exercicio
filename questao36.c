#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int numero = i;
        int fatorial = 1;

        while(numero > 0) 
        {
            fatorial *= numero;
            numero--;
        }
        printf("numero: %d; fatorial: %d\n", i, fatorial);
    }

    return 0;
}