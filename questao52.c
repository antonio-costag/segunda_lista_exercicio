#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho N do conjunto: ");
    scanf("%d", &n);

    int p;
    printf("Digite o tamanho P do subconjunto de elementos: ");
    scanf("%d", &p);

    int subtracao_fatorial = n - p;

    unsigned long long fatorial_n = 1;

    while(n > 0) 
    {
        fatorial_n *= n;
        n--;
    }

    unsigned long long fatorial_p = 1;

    while(p > 0) 
    {
        fatorial_p *= p;
        p--;
    }

    unsigned long long fatorial_sub = 1;

    while(subtracao_fatorial > 0) 
    {
        fatorial_sub *= subtracao_fatorial;
        subtracao_fatorial--;
    }

    int combinacao = fatorial_n / (fatorial_p * fatorial_sub);
    int arranjo = fatorial_n / fatorial_sub;

    printf("O valor da combinação é: %d\n", combinacao);
    printf("O valor do arranjo é: %d", arranjo);
    return 0;
}