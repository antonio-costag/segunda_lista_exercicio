#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int m = 1; m <= n; m++){
        int numero = m;
        int fatorial = 1;

        while(numero > 0) 
        {
            fatorial *= numero;
            numero--;
        }

        int somatorio = 0;
        for(int i = 1; i <= m; i++){
            somatorio += i;
        }

        printf("Numero: %d; Somatorio: %d; Fatorial: %d\n", m, somatorio, fatorial);
    }
    return 0;
}