#include <stdio.h>

int main(){
    int contador = 0;
    int numero = 1; 

    while (contador < 20)
    {
        char primo = 's';

        for(int i = 2; i < numero; i++){
            if(numero % i == 0){
                primo = 'n';
            }
        }

        if(primo == 's'){
            printf("%d ", numero);
            contador++;
        }

        numero++;
    }
    return 0;
}