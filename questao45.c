#include <stdio.h>

int main(){
    float media_idade_grupo = 0.0;

    float media_altura_mulheres = 0.0;
    int mulheres = 0;

    float media_idade_homens = 0.0;
    int homens = 0;

    float idade_18_35 = 0.0;

    for(int i = 0; i < 1000; i++){
        printf("\nPESSOA [%d]\n\n", i + 1);
        int sexo;
        printf("Digite o Sexo; feminino[0], masculino[1]: ");
        scanf("%d", &sexo);

        if(sexo == 0){
            mulheres++;
        }
        else if(sexo == 1){
            homens++;
        }
        else{
            printf("\n[ERRO] sexo invalido\n\n");
            break;
        }

        int idade;
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(idade >= 18 && idade <= 35){
            idade_18_35++;
        }

        if(sexo == 1){
            media_idade_homens += idade;
        }

        media_idade_grupo += idade;

        int alura;
        printf("Digite a altura[cm]: ");
        scanf("%d", &alura);

        if(sexo == 0){
            media_altura_mulheres += alura;
        }
    }

    printf("\nA média da idade do grupo é: %0.2f.\n", media_idade_grupo / 1000.0);
    printf("A média da altura[cm] das mulheres é: %0.2f.\n", media_altura_mulheres / (float)mulheres);
    printf("A média da idade dos homens é: %0.2f.\n", media_idade_homens / (float)homens);
    printf("O percentual de pessoas com idade entre 18 e 35 anos é: %0.2f.", (100.0 * idade_18_35) / 1000.0);
    return 0;
}