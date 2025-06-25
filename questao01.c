#include <stdio.h>

int main(){
    int a = 0;
    int numero_negativos = 0;

    for(int i = 1; i < 6; i++){
        printf("Insira um valor para A[%d]: ", i);
        scanf("%d", &a);

        if(a < 0){
            numero_negativos++;
        }
    }
    printf("\nVocê digitou %d números negativos.\n", numero_negativos);

    return 0;
}