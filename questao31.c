#include <stdio.h>

int main(){
    int dentro = 0;
    int fora = 0;

    for(int i = 0; i < 10; i++){
        int numero;

        printf("Digite um valor: ");
        scanf("%d", &numero);

        if(numero >= 10 && numero <= 20){
            dentro++;
        }
        else{

            fora++;
        }
    }
    printf("%d valores estão dentro do intervalo\n", dentro);
    printf("%d valores estão fora do intervalo\n", fora);
    return 0;
}