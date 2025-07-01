#include <stdio.h>

int main(){
    float media_preco = 0;
    float media_novo_preco = 0;
    int contador = 0;
    do{
        printf("PRODUTO[%d]\n\n", contador + 1);

        int codigo;
        printf("Digite o codigo do preduto: ");
        scanf("%d", &codigo);

        if(codigo < 0){
            printf("\nPROGRAMA FINALIZADO\n\n");
            break;
        }

        float preco;
        printf("Digite o preço do produto: ");
        scanf("%f", &preco);
        media_preco += preco;

        float novo_preco = preco * 1.20;
        media_novo_preco += novo_preco;
        
        contador++;

        printf("Codigo: %d\n", codigo);
        printf("Novo preço: %0.2f\n", novo_preco);
    }while (1);

    printf("A medias dos preços é: %0.2f\n", media_preco / contador);
    printf("A medias dos novos preços é: %0.2f\n", media_novo_preco / contador);

    return 0;
}
