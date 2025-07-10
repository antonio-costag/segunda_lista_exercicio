#include <stdio.h>

int main(){
    for(int i = 0; i < 75; i++){
        printf("\nALUNO: %d\n\n", i + 1);

        int numero_matricula;
        printf("Digite a matricula do aluno: ");
        scanf("%d", &numero_matricula);

        float nota_numerica_final;
        printf("Digite a nota numerica final do aluno: ");
        scanf("%f", &nota_numerica_final);

        printf("O aluno de matricula %d, tirou conceito '", numero_matricula);

        //Em C, não é possível usar switch com variáveis do tipo float 
        if(nota_numerica_final <= 4.9){
            printf("D'\n");
        }
        else if(nota_numerica_final <= 6.9){
            printf("C'\n");
        }
        else if(nota_numerica_final <= 8.9){
            printf("B'\n");
        }
        else if(nota_numerica_final <= 10.0){
            printf("A'\n");
        }
    }
    return 0;
}