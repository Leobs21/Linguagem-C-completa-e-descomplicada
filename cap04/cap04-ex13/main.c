#include <stdio.h>
#include <stdlib.h>
//Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
//das opções, e o seu programa pede dois valores numéricos e realiza a operação,
//mostrando o resultado
int main(){
    char operador;
    float x,y;
    printf("--------MATEMATICA-------\n");
    printf("Escolha uma operacao [+,-,*,/]: ");
    operador = getchar();
    printf("Digite dois numeros: ");
    scanf("%f%f", &x, &y);
    switch ( operador ){
        case '+':
            printf("A Soma entre os dois numeros e %.2f\n", x + y);
            break;
        case '-':
            printf("A Subtracao entre os dois numeros e %.2f\n", x - y);
            break;
        case '*':
            printf("A Multiplicacao entre os dois numeros e %.2f\n", x * y);
            break;
        case '/':
            printf("A Divisao entre os dois numeros e %.2f\n", x / y);
            break;
        default: printf("Digite um caracter valido entre [+,-,*,/]!.\fn");
    }
    system("pause");
    return 0;
}
