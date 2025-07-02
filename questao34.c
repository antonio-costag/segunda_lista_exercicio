#include <stdio.h>

int main(){
    int maior_altura = 0; 
    int numero_maior;

    int menor_altura = 0;
    int numero_menor;

    for(int i = 0; i < 5; i++){
        int numero;
        printf("Digite o numero do aluno: ");
        scanf("%d", &numero);

        int altura;
        printf("Digite a altura do aluno[cm]: ");
        scanf("%d", &altura);

        printf("\n");

        if(i == 0){
            maior_altura = altura;
            menor_altura = altura;
        }

        if(altura > maior_altura){
            numero_maior = numero;
            maior_altura = altura;
        }
        else if(altura < menor_altura){
            numero_menor = numero;
            menor_altura = altura;
        }
    }

    printf("Aluno de numero: %d, é o mais alto com %dcm\n", numero_maior, maior_altura);
    printf("Aluno de numero: %d, é o mais baixo com %dcm\n", numero_menor, menor_altura);

    return 0;
}