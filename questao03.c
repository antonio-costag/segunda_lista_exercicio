#include <stdio.h>

int main(){
    int ciclos_repeticao = 0;
    float media_salario = 0;
    float media_filhos = 0;
    int maior_salario = 0;
    int salario_ate100 = 0;

    while (1)
    {
        int salario = 0;
        printf("Digite seu salario: ");
        scanf("%d", &salario);

        if(salario < 0){
            printf("\n");
            printf("media do salario da população é: %0.2f\n", media_salario / ciclos_repeticao);
            printf("media do numero de filhos é: %0.2f\n", media_filhos / ciclos_repeticao);
            printf("o maior salario é: %d\n", maior_salario);

            float percentual_salario = (100*salario_ate100) / ciclos_repeticao;

            printf("percentual de pessoas com salario ate R$100,00 é: %0.2f", percentual_salario);

            return 0;
        }

        int filhos = 0;
        printf("Digite eu numero de filhos: ");
        scanf("%d", &filhos);

        media_salario += salario;
        media_filhos += filhos;

        if(salario > maior_salario){
            maior_salario = salario;
        }

        if(salario <= 100){
            salario_ate100++;
        }

        ciclos_repeticao++;
    }

    return 0;
}
