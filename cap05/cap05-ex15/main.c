#include <stdio.h>
#include <stdlib.h>
//Elabore um programa que faça a leitura de vários números inteiros
//até que se digite um número negativo.
//O programa tem de retornar o maior e o menor número lido.
int main(){
    int n, menor;
    int maior = 0;
    printf("Digite um numero INTEIRO para continuar ou numero NEGATIVO para sair do programa.\n");
    while(1){
        printf("Numero: ");
        scanf("%d", &n);
        if (n < menor && n >= 0){
            menor = n;
        }
        if (n > maior){
            maior = n;
        }
        if (n < 0){
            break;
        }
    }
    printf("\n");
    printf("Numero negativo digitado: %d.\n", n);
    printf("O maior numero digitado: %d.\n", maior);
    printf("O menor numero digitado: %d.\n", menor);
    system("pause");
    return 0;
}
