#include <stdio.h>

int main(){
    int maior_numero = 0;
    int menor_numero = 0;

    for(int i = -1; i < 49; i++){
        if(i > maior_numero){
            maior_numero = i;
        }
        if(i < menor_numero){
            menor_numero = i;
        }
    }

    printf("Maior numero: %d\n", maior_numero);
    printf("Menor numero: %d\n", menor_numero); 

    return 0;
}
