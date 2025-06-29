#include <stdio.h>
#include <math.h>

int main(){
    // fazendo assim pq numero negativo não pode ter raiz quadrada
    int numero = 0;
    int contador = 20;

    while(numero >= 0){
        printf("Digite um valor: ");
        scanf("%d", &numero);

        if(numero < 0){
            printf("Numero negativo, encerrando o programa.\n");
            break;
        }

        if(contador == 20){
            printf("\n\n+-----------------------------------------------------+\n");
            printf("|                  RELATÓRIO DE VALORES               |\n");
            printf("+-----------------------------------------------------+\n");
            printf("| VALOR |    QUADRADO   |     CUBO      |RAIZ QUADRADA|\n");
            contador = 1;
        }
        else{
            contador++;
        }
        float quadrado = numero * numero;
        float cubo = numero * numero * numero;

        //sqrt() retorna o valor da raiz quadrada, é da biblioteca math.h
        float raiz_quadrada = sqrt(numero);

        printf("+-----------------------------------------------------+\n");
        printf("|   %d   |     %0.2f    |     %0.2f    |      %0.2f   |\n",numero, quadrado, cubo, raiz_quadrada);
        printf("+-----------------------------------------------------+\n");
    }
    return 0;
}
