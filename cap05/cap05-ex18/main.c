#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba um número inteiro maior do que 1 e verifique se o
//número fornecido é primo ou não
int main() {
    int n,i;
    int x = 0;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &n);
    if (n == 1){
        return 1;
    }
    for (i = 2; i < n; i++){
        if (n % i == 0){
            printf("%d ", i);
            x += 1;
        }
    }
    if (x >= 1){
        printf("\nO numero %d possui mais de um divisor, nao e primo!\n", n);
    } else{
        printf("\nO numero %d e divisivel so por 1 e ele mesmo, e primo!\n", n);
    }
    return 0;
}
