#include <stdio.h>

int main(){
    int m;
    int n;
    int soma = 0;

    do
    {
        printf("\nDigite o valor de m (positivo e inteiro): ");
        scanf("%d", &m);
           
        printf("Digite o valor de n (positivo e inteiro): ");
        scanf("%d", &n);

        if (m < 1 || n < 1)
        {
            printf("\nValor de m e n deve ser positivo. Encerrando o programa.\n");
            break;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d + %d = %d\n", m, i,  m + i);
            soma += m + i;
        }
        printf("\nA soma dos valores é: %d\n", soma);
        

    } while (1);

    return 0;
}
