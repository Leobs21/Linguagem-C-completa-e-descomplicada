#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia um n�mero inteiro e mostre a multiplica��o e a
//divis�o desse n�mero por dois (utilize os operadores de deslocamento de bits).
int main(){
    int x,m;
    float d;
    printf("Digite 1 numero para multiplicacao: ");
    scanf("%d", &x);
    m = x << 1;
    d = x >> 1; // retorna numeros reais com zeros de pontos flutuantes, n�o funciona casting. exemplo x = 5 resultado 2.00;
    printf("multiplicacao: %d\n", m);
    printf("Divisao: %.2f\n", d);
    system("pause");
    return 0;
}
