#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel
//por 3 ou 5, mas n�o simultaneamente pelos dois
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0)
        printf("O numero informado e divisivel por 3 ou 5.  Valor: %d\n", num);
    else
        printf("O numero informado nao e divisivel por 3 ou 5.  Valor: %d\n", num);
    system("pause");
    return 0;
}
