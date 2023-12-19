#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
//seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
//  • Homens: (72,7 * h) – 58
//  • Mulheres: (62,1 * h) – 44,7
int main(){
    float h, pesoIdeal;
    char sexo;
    printf("Digite seu sexo (m ou f): ");
    sexo = getchar();
    printf("Digite sua altura: ");
    scanf("%f", &h);
    switch ( sexo ){
        case 'm':
            pesoIdeal = (72.7 * h) - 58;
            break;
        case 'f':
            pesoIdeal = (62.1 * h) - 44.7;
            break;
    }
    if (sexo == 'm' || sexo == 'f')
        printf("O peso ideal seria: %.2f\n", pesoIdeal);
    else
        printf("Digite \"masculino\" ou \"feminino\".\n");

    system("pause");
    return 0;
}

