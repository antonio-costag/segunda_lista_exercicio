#include <stdio.h>

int main(){

    for(int n = 1; n <= 20; n++){
        for(int i = 1; i <= n; i++){
            printf("%d x %d = %d\n", i, n, i * n);
        }
        printf("\n\n");
    }

    return 0;
}