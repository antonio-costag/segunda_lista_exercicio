#include <stdio.h>

int main(){
    int maior_valor = 0;
    int menor_valor = 0;
    float media = 0;

    for(int i = 1; i <= 500; i++){
        if(i == 1){
            maior_valor = i;
            menor_valor = i;
        }

        if(i > maior_valor){
            maior_valor = i;
        }
        else if(i < menor_valor){
            menor_valor = i;
        }

        media += i;
    }
    printf("Maior valor: %d\n", maior_valor);
    printf("Menor valor: %d\n", menor_valor);
    printf("Media valores: %f\n", media / 500);
    
    return 0;
}