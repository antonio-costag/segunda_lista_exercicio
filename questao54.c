#include <stdio.h>

int main(){
    int repetir = 1;

    while (repetir == 1){
        int inicio;
        printf("Digite o inicio do intervalo: ");
        scanf("%d", &inicio);

        int fim;
        printf("Digite o fim do intervalo: ");
        scanf("%d", &fim);

        int intervalo = fim - inicio;

        if(fim - inicio <= 0){
            printf("\n[ERRO] O fim deve ser maior que o inicio\n\n");
            repetir = 1;
        }
        else if(intervalo % 3 != 0){
            printf("\n[ERRO] o intervalo não pode ser dividido em 3 partes\n\n");
            repetir = 1;
        }
        else{
            int parte_dividida = intervalo / 3;
            
            for(int i = 1; i <= 3; i++){
                printf("\nINTERVALO[%d]\n", i);

                for(int i = 0; i <= parte_dividida; i++){
                printf("%d\n", inicio++);
                }

                inicio--;
            }
            repetir = 0;
        }
    }
    return 0;
}