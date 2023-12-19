#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa
//no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma
//dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,
//13, 21, 34
int main(){
    int a = 0;
    int b = 1;
    int resultado = 0;
    int i;
    for (i = 0; i < 10; i++){
        printf("%d ", resultado);
        a = b;
        b = resultado;
        resultado = a + b;
    }
    printf("\nO enesimo termo da sequencia fibonacci e %d.\n", resultado-a);
    system("pause");
    return 0;
}
// a = 0, b = 1, a + b = 1, resultado = 1, a = 1, b = 1
// a = 1, b = 1, a + b = 2, resultado = 2, a = 1, b = 2
// a = 1, b = 2, a + b = 3, resultado = 3, a = 2, b = 3
// a = 2, b = 3, a + b = 5, resultado = 5, a = 3, b = 5
// a = 3, b = 5, a + b = 8, resultado = 8, a = 5, b = 5
