#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma
//das op��es, e o seu programa pede dois valores num�ricos e realiza a opera��o,
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
