#include <stdio.h>

int main(){
    int soma = 0;
    for(int i = 13; i <= 73; i++){
        soma += i;
    }
    printf("A media é: %d", soma / (73 - 13));
    return 0;
}