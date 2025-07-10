#include <stdio.h>

int main(){
    int x;
    int y;

    do{
        printf("Digite o valor de X inteiro e positivo: ");
        scanf("%d", &x);

        printf("Digite o valor de Y inteiro e positivo: ");
        scanf("%d", &y);

        if(x < 0 || y < 0){
            printf("\n[ERRO] valor invalido\n\n");
        }
    }
    while (x < 0 || y < 0);

    int potencia = 1;

    for(int i = 0; i < y; i++){
        potencia *= x;
    }

    printf("A potencia de %d elevado a %d é: %d", y, x, potencia);
    return 0;
}