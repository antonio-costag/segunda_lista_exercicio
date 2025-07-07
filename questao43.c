#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    int d;
    int matrix[5][4];

    for(int i = 0; i < 5; i++){
        printf("GRUPO[%d]\n", i + 1);
        printf("Digite o valor de A: ");
        scanf("%d", &a);

        matrix[i][0] = a;

        printf("Digite o valor de B: ");
        scanf("%d", &b);

        matrix[i][1] = b;

        printf("Digite o valor de C: ");
        scanf("%d", &c);

        matrix[i][2] = c;

        printf("Digite o valor de D: ");
        scanf("%d", &d);

        matrix[i][3] = d;
    }

    printf("\nLista normal:\n");
    for(int l = 0; l < 5; l++){
        printf("Gurpo[%d]:", l + 1);

        for(int c = 0; c < 4; c++){
            printf(" %d", matrix[l][c]);
        }

        printf("\n");
    }

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 4; j++){
            for(int m = j + 1; m < 5; m++){
                if(matrix[i][j] < matrix[i][m]){
                    int menior =  matrix[i][j];
                    matrix[i][j] =  matrix[i][m];
                    matrix[i][m] = menior;
                }
            }
        }
    }

    printf("\nLista Ordenada:\n");
    for(int l = 0; l < 5; l++){
        printf("Gurpo[%d]:", l + 1);

        for(int c = 0; c < 4; c++){
            printf(" %d", matrix[l][c]);
        }

        printf("\n");
    }

    printf("Lista ordenada:\n");
    
    return 0;
}