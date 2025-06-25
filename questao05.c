#include <stdio.h>

int main(){
    int valor = 0;
    int contador = 0;
    float media = 0.0;

    while(valor > -1){
        printf("Aluno[%d]", contador + 1);
        printf("Digite uma nota: ");
        scanf("%d", &valor);

        if(valor > -1){
            media += valor;
            contador++;
        }
        else{
            media /= contador;
            break;
        }
    }

    printf("A media das notas e: %0.2f\n", media);

    return 0;
}
