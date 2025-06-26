#include <stdio.h>

int main(){
    int n;
    int a1;
    int r;
    int soma_progressao = 0;

    printf("Número de termos de uma progressão aritmética: ");
    scanf("%d", &n);

    printf("O primeiro termo da progressão: ");
    scanf("%d", &a1);

    printf("A razão da progressão: ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++)
    {
        soma_progressao += a1;
        printf("%d ", a1);
        a1 += r;
    }
    printf("\nA soma dos termos da progressão aritmética é: %d\n", soma_progressao);
    
    return 0;
}