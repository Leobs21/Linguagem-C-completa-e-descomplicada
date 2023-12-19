#include <stdio.h>
#include <stdlib.h>
//A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
//  i. O primeiro ganhador receberá 46% do total.
//  ii. O segundo receberá 32% do total.
//  iii. O terceiro receberá o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores
int main(){
    float a,b,c, premio; //a 46%, b 32%, c restante
    premio = 780.000;
    a = premio * 0.46;
    b = premio * 0.32;
    c = premio - a - b;
    printf("Temos R$780.000,00 para dividir em tres ganhadores de um concurso, sendo que:\n");
    printf("i. O primeiro ganhador recebera 46%% do total sendo de R$%.3f\n", a);
    printf("ii. O segundo recebera 32%% do total sendo de R$%.3f\n", b);
    printf("iii. O terceiro recebera o restante sendo de R$%.3f\n", c);
    system("pause");
    return 0;
}
