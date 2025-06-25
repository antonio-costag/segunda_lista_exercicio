#include <stdio.h>

int main(){
    float chico = 1.50;
    float ze = 1.10;
    int contador;

    while (chico >= ze)
    {
        chico += 0.02;
        ze += 0.03;

        /*printf("%0.2f\n", chico);
        printf("%0.2f\n", ze);*/

        contador++;
    }

    printf("Foram nessecarios %d anos para ze ser maior que chico", contador);
    
    return 0;
}
