#include <stdio.h>
#include <math.h>

int main(){
    int x;
    float resultado = 0.0;
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for(int i = 1; i <= 20; i++){
        double equacao = 1.0 / (pow(x, i));
        printf("%0.20lf\n", equacao);
        resultado += (float)equacao;
    }
    printf("Resultado: %0.2f", resultado);
    return 0;
}