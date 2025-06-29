#include <stdio.h>

int main(){
    int m;
    int divisores;
    printf("Digite um numero de repetições: ");
    scanf("%d", &m);

    for(int i = 1; i <= m; i++){
        if(i % 2 == 0){
            for(int j = 1; j <= i; j++){
                if(i % j == 0){
                   divisores++;
                }
            }
            printf("\nO número %d tem %d divisores.\n", i, divisores);
            divisores = 0;
        }
        else if(i % 2 != 0 && i <= 10){
            int numero = i;
            int fatorial = 1;

            while(numero > 0) 
            {
                fatorial *= numero;
                numero--;
            }
            printf("\nO fatorial de %d é %d.\n", i, fatorial);
        }
        else if(i % 2 != 0 && i >= 10){
            int soma = 0;
            for(int j = 1; j <= i; j++){
                soma += j;
            }
            printf("\nA soma dos números de 1 a %d é %d.\n", i, soma);
        }
    }

    return 0;
}
