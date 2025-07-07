#include <stdio.h>
#include <string.h>

int main(){
    int cidade_menor_indice;
    int cidade_maior_indice;
    int numero_menor_indice;
    int numero_maior_indice;

    float media_de_veiculo = 0;
    float media_vitimas_rg = 0;
    int cidades_rg = 0;

    for(int i = 0; i < 200; i++){
        int codigo_cidade;
        printf("Digite o codigo da Cidade: ");
        scanf("%d", &codigo_cidade);

        char estado[3];
        printf("Digite o esatdo ex:(rj): ");
        scanf("%2s", &estado);

        int veiculos_de_passeio;
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &veiculos_de_passeio);

        int acidente_vitimas;
        printf("Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &acidente_vitimas);

        printf("\n");

        if(i == 0){
            cidade_menor_indice = codigo_cidade;
            cidade_maior_indice = codigo_cidade;

            numero_menor_indice = acidente_vitimas;
            numero_maior_indice = acidente_vitimas;
        }

        if(numero_menor_indice < acidente_vitimas){
            cidade_menor_indice = codigo_cidade;
            numero_menor_indice = acidente_vitimas;
        }

        if(numero_maior_indice > acidente_vitimas){
            cidade_maior_indice = codigo_cidade;
            numero_maior_indice = acidente_vitimas;
        }

        media_de_veiculo += veiculos_de_passeio;

        if(strcmp(estado, "rg") == 0){
            media_vitimas_rg += acidente_vitimas;
            cidades_rg++;
        }
    }

    printf("O maior e o menor índice de acidentes de trânsito são, respesctivamente %d - (cidade de codigo: %d) e %d - (cidade de codigo: %d).\n", numero_maior_indice, cidade_maior_indice, numero_menor_indice, cidade_menor_indice);

    printf("A média de veículos nas cidades brasileiras é: %0.2f.\n", media_de_veiculo / 200);

    printf("A média de acidentes com vítimas entre as cidades do Rio Grande do Sul é: %0.2f.\n", media_vitimas_rg / cidades_rg);

    return 0;
}