#include <stdio.h>
#include <stdlib.h>
// Faça um programa que receba do usuário um vetor X com 10 posições.
// Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
int main()
{
    int vet[10];
    int i,menor;
    int maior = 0;
    printf("Digite 10 valores para armazenar no vetor[10].\n");
    for(i=0; i < 10 ;i++){
        printf("Valor na Posicao %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("\n");
    printf("O MENOR elemento armazenado foi %d.\n", menor);
    printf("O MAIOR elemento armazenado foi %d.\n", maior);
    system("pause");
    return 0;
}
