#include <stdio.h>

int main(){;
    //1 pra não atrapalhar o loop
    int codigo_aluno = 1;
    float media;

    while(codigo_aluno != 0){
        printf("\n\nDigite o codigo do aluno (0 para finalizar): ");
        scanf("%d", &codigo_aluno);

        if(codigo_aluno == 0){
            printf("\nPrograma finalizado\n");
            break;
        }

        float nota1;
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        float nota2;
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        float nota3;
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;

        printf("\nAluno de codigo: %d", codigo_aluno);
        printf("\nA media é igual a: %0.2f", media);
    }

    return 0;
}
