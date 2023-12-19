#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia um valor inteiro e positivo N,
// calcule o mostre o valor E, conforme a fórmula a seguir:
//              1   1   1        1
//          E = - + - + - +...+ -
//              1!  2!  3!       N!
int main(){
    int n;
    int i = 1;
    float f = 1;
    float x = 0.0;
    float e = 0.0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    while(i <= n){
        printf("1/");
        f *= i;
        x = 1.0/f;
        e += x;
        i++;
        printf("%d! = %.4f ", i-1,x);
    }
    printf("\nValor de E aproximado e %.4f.\n", e);
    system("pause");
    return 0;
}
