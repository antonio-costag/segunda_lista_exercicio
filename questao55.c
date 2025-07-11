#include <stdio.h>

int main(){
    int data1;
    int data2;

    for(int i = 0; i < 2; i++){
        printf("\nData %d\n\n", i + 1);
        int dia = 0;
        printf("Digite o dia: ");
        scanf("%d", &dia);

        int mes = 0;
        printf("Digite o mês: ");
        scanf("%d", &mes);

        mes--;

        int dia_mes = mes;
        dia_mes = dia_mes * 30;

        int ano = 0;
        printf("Digite o ano: ");
        scanf("%d", &ano);

        int dia_ano = 0;

        for(int i = 1; i <= ano - 1; i++){
            if(i % 4 == 0 && i % 100 != 0
            || i % 100 == 0 && i % 400 == 0){
                dia_ano += 366;
            }
            else{
                dia_ano += 365;
            }
        }

        char bissexto = 'n';

        if(ano % 4 == 0 && ano % 100 != 0
        || ano % 100 == 0 && ano % 400 == 0){
            bissexto = 's';
        }

        if(bissexto == 's'){
            if(mes == 1){
                dia_mes += 1;
            }
            else if(mes == 3){
                dia_mes += 1;
            }
            else if(mes == 4){
                dia_mes += 1;
            }
            else if(mes == 5){
                dia_mes += 2;
            }
            else if(mes == 6){
                dia_mes += 2;
            }
            else if(mes == 7){
                dia_mes += 3;
            }
            else if(mes == 8){
                dia_mes += 4;
            }
            else if(mes == 9){
                dia_mes += 4;
            }
            else if(mes == 10){
                dia_mes += 5;
            }
            else if(mes == 11){
                dia_mes += 5;
            }
            else if(mes == 12){
                dia_mes += 6;
            }
        }
        else{
            if(mes == 1){
                dia_mes += 1;
            }
            else if(mes == 2){
                dia_mes -= 1;
            }
            else if(mes == 5){
                dia_mes += 1;
            }
            else if(mes == 6){
                dia_mes += 1;
            }
            else if(mes == 7){
                dia_mes += 2;
            }
            else if(mes == 8){
                dia_mes += 3;
            }
            else if(mes == 9){
                dia_mes += 3;
            }
            else if(mes == 10){
                dia_mes += 4;
            }
            else if(mes == 11){
                dia_mes += 4;
            }
            else if(mes == 12){
                dia_mes += 5;
            }
        }

        if(i == 0){
            data1 = dia + dia_mes + dia_ano;
        }
        else{
            data2 = dia + dia_mes + dia_ano;
        }
    }

    int diferenca_dias = data1 - data2;

    if(diferenca_dias < 0){
        diferenca_dias *= -1;
    }

    printf("\n\nA diferença entre as datas, em dias, é de: %d dias", diferenca_dias);
    return 0;
}