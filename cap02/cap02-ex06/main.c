#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um valor do tipo double e depois o imprima na forma
//de nota��o cient�fica
int main(){
    double x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    printf("Valor lido: %e\n", x);
    system("pause");
    return 0;
}
