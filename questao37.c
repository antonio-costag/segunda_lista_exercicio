#include <stdio.h>
#include <math.h>

int main(){
    int x;
    float resultado = 0.0;
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for(int i = 1; i <= 20; i++){
        unsigned long long potencia = 1;

        for(int j = 0; j < i; j++){
            potencia *= x;
        }
        double equacao = 1.0 / (double)potencia;

        // "^" indica que o numero da direita esta sendo elevado elevado.
        printf("1 / %d^%d = %0.15lf\n", x, i, equacao);
        resultado += (float)equacao;
    }
    printf("Resultado: %0.2f", resultado);
    return 0;
}