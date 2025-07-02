#include <stdio.h>

int main(){
    for(int i = 0; i < 5; i++){
        int a;
        printf("Digite o valor de A: ");
        scanf("%d", &a);

        int b;
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        if(a >= b || a < 0 || b < 0){
            printf("\n[ERRO], apenas numeros inteiros positivos e a < b\n\n");
            i--;
        }
        else{
            printf("\n");
            for(int i = a; i <= b; i++){
                if(i % 2 == 0){
                    printf("%d\n", i);
                }
            }
            printf("\n");
        }
    }

    return 0;
}