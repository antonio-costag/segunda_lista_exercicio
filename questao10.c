#include <stdio.h>
    int codigo_aluno = 0;
    float media;

int main(){
    while(codigo_aluno > -1){
        float maior_nota = 0.0;
        float nota_normal1 = 0.0;
        float nota_normal2 = 0.0;

        printf("\n\nDigite o codigo do aluno (<= -1 para finalizar): ");
        scanf("%d", &codigo_aluno);

        if(codigo_aluno < 0){
            printf("\nPrograma finalizado\n\n");
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

        maior_nota = nota1;
        nota_normal1 = nota2;
        nota_normal2 = nota3;

        if(nota2 > maior_nota) {
            maior_nota = nota2;
            nota_normal1 = nota1;
            nota_normal2 = nota3;
        }
        if(nota3 > maior_nota) {
            maior_nota = nota3;
            nota_normal2 = nota2;
            nota_normal1 = nota1;
        }

        media = ((maior_nota * 4) + (nota_normal1 * 3) + (nota_normal2 * 3)) / (4.0 + 3.0 + 3.0);

        printf("\nCodido do aluno: %d", codigo_aluno);
        printf("\nA primeira nota foi: %0.2f", nota1);
        printf("\nA segunda nota foi: %0.2f", nota2);
        printf("\nA terceira nota foi: %0.2f", nota3);
        printf("\nA media é igual a: %0.2f", media);

        if(media >= 5){
            printf("\nAPROVADO\n");
        }
        else{
            printf("\nREPROVADO\n");
        }
    }
    return 0;
}