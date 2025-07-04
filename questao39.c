#include <stdio.h>

int main(){
    int numero_perfeito = 0;
    int contador = 1;

    //o quinto numero perfeito demora muito pra ser exibido
    while (numero_perfeito <= 5)
    {
        int numero = contador;
        int divisores = 0;

        for(int i = 1; i <= numero; i++){
            if(numero % i == 0 && i != numero){
                divisores += i;
            }
        }
        if(divisores == numero){
            numero_perfeito++;
            printf("%d\n", divisores);
        }

        contador++;
    }
    return 0;
}