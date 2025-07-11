#include <stdio.h>

int main(){
    unsigned long long produto = 1;

    for(int i = 92; i <= 1478; i++){
        int primo = 1;

        for(int j = 1; j <= i; j++){
            if(i % j == 0 && j != 1 && j != i){
                primo = 0;
            }
        }

        if(primo == 1 && i != 1){
            produto *= i;
            printf("%d ", i);

            if(i == 1471){
                printf("= ");
            }
            else{
                printf("* ");
            }
        }
    }
    //nao da o valor exato pq o valor é grande demais pra conseguir ser armazenado
    printf("%lld", produto);
    return 0;
}