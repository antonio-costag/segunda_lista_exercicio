#include <stdio.h>

int main(){
    int n;

    do{
        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n < 0){
            printf("\n[ERRO] O fatorial de um número negativo não é definido na matemática usual\n\n");
        }
    }
    while (n < 0);

    int fatorial = 1;

    while(n > 0) 
    {
        fatorial *= n;
        n--;
    }

    printf("O fatyorial do numero é: %d", fatorial);
    
    return 0;
}