#include <stdio.h>

int main(){
    float media_geral = 0.0;

    for(int i = 0;  i < 50; i++){
        float soma_notas = 0.0;

        printf("\nALUNO[%d]\n\n", i + 1);

        for(int j = 2; j <= 4; j++){
            float n;
            printf("Digite a nota[%d]: ", j - 1);
            scanf("%f", &n);

            if(j == 3){
                soma_notas += n * ( j + 1.0);
            }
            else if(j == 4){
                soma_notas += n * ( j - 1.0);
            }
            else{
                soma_notas += n * j;
            }
        }

        float media = (soma_notas / 10.0);
        media_geral += media;

        if(media >= 7.0){
            printf("Media é igual a do aluno[%d]: %0.2f, Aprovado!!!!\n", i + 1, media);
        }
        else{
            printf("Media é igual a do aluno[%d]: %0.2f, Reprovado!!!!\n", i + 1, media);
        }
    }

    printf("A media geral dos alunos é %0.2f", media_geral / 50.0);
    return 0;
}