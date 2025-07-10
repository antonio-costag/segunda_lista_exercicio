#include <stdio.h>

int main(){
    int maior_idade = 0;
    int pessoa_detalhada = 0;

    for(int i = 0; i < 500; i++){
        printf("\nINDIVIDUO[%d]\n\n", i + 1);

        char sexo;
        printf("Masculino[m] e Feminino[f]\n");
        printf("Digite o sexo: ");
        scanf(" %c", &sexo);

        char olhos;
        printf("azuis[a], verdes[v] ou castanhos[c]\n");
        printf("Cor dos olhos: ");
        scanf(" %c", &olhos);

        char cabelos;
        printf("louros[l], castanhos[c], pretos[p]\n");
        printf("Cor dos cabelos: ");
        scanf(" %c", &cabelos);

        int idade;
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(i == 0){
            maior_idade = idade;
        }

        if(idade > maior_idade){
            maior_idade = idade;
        }

        if(sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'v' && cabelos == 'l'){
            pessoa_detalhada++;
        }
    }

    printf("A maior idade dentro os habitantes é: %d\n\n", maior_idade);
    printf("A quantidade de indivíduos do sexo feminino\ncuja idade está entre 18 e 35 anos inclusive\ne que tenham olhos verdes e cabelos louros é: %d\n", pessoa_detalhada);
    return 0;
}