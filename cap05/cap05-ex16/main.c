#include <stdio.h>
#include <stdlib.h>
//Em matemática, o número harmônico designado por Hn define-se
//como o enésimo termo da série harmônica. Ou seja:
//                  Hn = 1+1+1+1+...+1
//                         2 3 4     n
//Apresente um programa que calcule o valor de qualquer Hn.
int main(){
    int i, n;
    float x;
    float hn = 0;
    float resultado = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        x = i;
        hn = 1/x;
        printf("1\\%.0f = %.2f ", x, hn);
        resultado += hn;
    }
    printf("\nHn de %d e %.5f\n",n,resultado);
    system("pause");
    return 0;
}
