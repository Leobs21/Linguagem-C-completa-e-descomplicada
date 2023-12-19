#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Fa�a um programa para ler um n�mero inteiro positivo de tr�s d�gitos. Em seguida, calcule e mostre o n�mero formado pelos d�gitos invertidos do n�mero lido.
//Exemplo:
//  N�mero lido = 123
//  N�mero gerado = 321

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
