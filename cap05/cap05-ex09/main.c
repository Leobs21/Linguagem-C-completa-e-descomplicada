#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
//valor lido.

int main(){
    int menor,i,n;
    int maior = 0;
    int j = 10;
    printf("Digite 10 numeros, no final, o programa ira printar o menor e o maior numero digitado.\n");
    for(i = 0; i < j;i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &n);
        if (n > maior){
            maior = n;
        }
        if (n < menor){
            menor = n;
        }
    }
    printf("O menor numero digitado foi %d.\nO maior numero digitado foi %d\n.", menor, maior);
    system("pause");
    return 0;
}

