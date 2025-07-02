#include <stdio.h>

int main(){
    int maior_altura;
    int menor_altura;

    float media_altura_mulheres = 0.0;

    float media_altura_turma = 0.0;
    int mulheres = 0;

    int repeticoes = 50;

    for(int i = 0; i < repeticoes; i++){

        printf("\nPESSOA: %d\n\n", i + 1);

        int altura;
        printf("Digite a altura[cm]: ");
        scanf("%d", &altura);

        int sexo;
        printf("Digite o sexo, feminino = 1; masculino = 2: ");
        scanf("%d", &sexo);

        if(sexo < 1 || sexo > 2){
            printf("\n\n[ERRO], feminino = 1; masculino = 2\n\n");
            i--;
        }
        else{
            if(i == 0){
            maior_altura = altura;
            menor_altura = altura;
            }

            if(altura > maior_altura){
                maior_altura = altura;
            }
            else if(altura < menor_altura){
                menor_altura = altura;
            }

            if(sexo == 1){
                media_altura_mulheres += altura;
                mulheres++;
            }

            media_altura_turma += altura;
        }
    }

    printf("A maior altura é: %dcm\n", maior_altura);
    printf("A menor altura é: %dcm\n", menor_altura);

    printf("A media da altura das mulher é: %0.2f\n", media_altura_mulheres / mulheres);

    printf("A media da altura da turma é: %0.2f\n", media_altura_turma / repeticoes);
    return 0;
}