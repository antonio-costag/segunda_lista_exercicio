#include <stdio.h>

int main(){
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int voto_nulo = 0;
    int voto_branco = 0;

    int voto = 0;

    do{
        printf("Digite o número do candidato (1, 2, 3, 4) ou 5 para voto nulo, 6 para voto em branco: ");
        scanf("%d", &voto);

        if(voto == 1){
            candidato1++;
        }
        else if(voto == 2){
            candidato2++;
        }
        else if(voto == 3){
            candidato3++;
        }
        else if(voto == 4){
            candidato4++;
        }
        else if(voto == 5){
            voto_nulo++;
        }
        else if(voto == 6){
            voto_branco++;
        }
    }while (voto != 0);

    printf("\n");
    printf("|RESULTADO DAS ELEIÇÕES|\n");
    printf("|----------------------|\n");
    printf("|  Canditado  |  Votos |\n");
    printf("|      1      |   %d   |\n", candidato1);
    printf("|      2      |   %d   |\n", candidato2);
    printf("|      3      |   %d   |\n", candidato3);
    printf("|      4      |   %d   |\n", candidato4);
    printf("|----------------------|\n");
    printf("Votos nulos: %d\n", voto_nulo);
    printf("Votos em branco: %d\n", voto_branco);  

    return 0;
}
