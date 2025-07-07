#include <stdio.h>

int main(){
    int soma = 0;
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n > 0){
        for(int i = 0; i < n; i++){
        soma += 10;
        }
        printf("A soma é igual a: %d", soma);
        return 0;
    }
    else{
        printf("[ERRO]; n > 0");
    }
}