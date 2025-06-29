#include <stdio.h>

int main(){
    int idade;
    int maior_idade = 0;
    int menor_idade = 0;

    char sexo;

    float salario;
    float media_salario = 0.0;
    int mulher_baixo_100 = 0;

    int contador = 0;

    do{
        printf("\n\nPESSOA [%d]\n", contador + 1);
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if(idade < 0){
            printf("\nPrograma finalizado\n\n");
            break;
        }

        if(contador == 0){
            menor_idade = idade;
        }

        //Esse espaço em branco " %c", pq por algum motivo ele lia o enter da pegunta anterior; 
        printf("Digite o sexo(m/f): ");
        scanf(" %c", &sexo);

        printf("Digite o seu salario: ");
        scanf("%f", &salario);

        media_salario += salario;

        if(idade > maior_idade){
            maior_idade = idade;
        }
        else if(idade < menor_idade){
            menor_idade = idade;
        }

        if(sexo == 'f' && salario <= 100){
            mulher_baixo_100++;
        }

        contador++;
    }while (idade >= 0);

    printf("A media de Salario do grupo é: %0.2f\n", media_salario / contador);
    printf("A maior idade do grupo é: %d\n", maior_idade);
    printf("A menor idade do grupo é: %d\n", menor_idade);
    printf("A Quantidade de mulheres com salário até R$100,00 é: %d\n", mulher_baixo_100);
    
    return 0;
}
