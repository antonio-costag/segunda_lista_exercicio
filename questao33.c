
//Questão repetida, a 12 é o mesmo comando

#include <stdio.h>

int main(){
    for(int i = 0; i < 20; i++){
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        printf("\nRepeticao: %d\n", i + 1);
        for(int i = 1; i <= numero; i++){
            printf("%d x %d = %d\n", i, numero, i * numero);
        }
        printf("\n\n");
    }
    return 0;
}