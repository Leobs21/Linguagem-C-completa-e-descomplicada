#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia um número inteiro e calcule a soma de todos os
//divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores
//do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
int main(){
    int i,n;
    int soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    for(i = 1; i < n; i++){
        if (n % i == 0){
            soma += i;
            printf("%d\n", i);
        }
    }
    printf("A soma entre os divisores do numero %d e: %d\n", n,soma);
    system("pause");
    return 0;
}
