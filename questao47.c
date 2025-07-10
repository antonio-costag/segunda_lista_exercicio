#include <stdio.h>

int main(){
    for(int i = 0; i < 150; i++){
        char nome_cliente[51];
        printf("Digite o nome do cliente: ");
        //Pra não quebrar a leitura no primeiro espaço
        fgets(nome_cliente, 51, stdin);

        float valor_compras;
        printf("Digite o valor de suas compras no ano passado: ");
        scanf("%f", &valor_compras);

        printf("O cliente: %s", nome_cliente);

        if(valor_compras < 500.0){
            printf("Recebeu um bonus de 10 porcento\n\n");
        }
        else{
            printf("Recebeu um bonus de 15 porcento\n\n");
        }
    }

    //printf("\n\n%s", nome_cliente);
    return 0;
}