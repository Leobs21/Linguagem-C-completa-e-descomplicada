#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido.
//Exemplo:
//  Número lido = 123
//  Número gerado = 321

int main() {
    int numero, inverso;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    int digito1 = numero / 100;       //1.23
    int digito2 = (numero / 10) % 10; //2.30
    int digito3 = numero % 10;        //3

    inverso = digito3 * 100 + digito2 * 10 + digito1;

    printf("Numero invertido: %d\n", inverso);
    system("pause");
    return 0;
}
