#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia três números inteiros positivos e efetue o cálculo de
//uma das seguintes médias de acordo com um valor numérico digitado pelo usuario
// e mostrado na tabela a seguir

//numero digitado |  media\\
//      1               geometrica: x*y*z
//      2               ponderada: x+2*y+3*z / 6
//      3               harmonica: 1 / (1/x + 1/y + 1/z)
//      4               aritmetica: x+y+z / 3
int main(){
    int x,y,z,tm;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &x,&y,&z);
    printf("Escolha o tipo de Media [1 geometrica, 2 ponderada, 3 harmonica, 4 aritmetica]: ");
    scanf("%d", &tm);
    switch ( tm ){
        case 1:{
            float r = x * y * z;
            printf("Geometrica %.3f\n", r);}
            break;
        case 2:{
            float r = (x + 2 * y + 3 * z) / 6;
            printf("Ponderada %.3f\n", r);}
            break;
        case 3:{
            float r1 = (3 * x * y * z);
            float r2 = (y*z) + (x*z) + (x*y);
            printf("Harmonica %.3f\n", r1/r2);}
            break;
        case 4:{
            float r = (x + y + z) / 3;
            printf("Aritmetica %.3f\n", r);}
        break;
        default: if (tm > 4) printf("Escolha um tipo de media entre 0 e 4.\n");
    }
    system("pause");
    return 0;
}
