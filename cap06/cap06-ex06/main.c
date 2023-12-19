#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que leia do teclado um vetor de 10 posições.
// Escreva na tela quantos valores pares foram armazenados nesse vetor.
int main()
{
    int vet[10];
    int i;
    int par = 0;
    printf("Digite 10 valores para armazenar no vetor[10].\n");
    for(i=0; i < 10 ;i++){
        printf("Valor na Posicao %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            par += 1;
        }
    }
    printf("Foram armazenados %d valores pares nesse vetor[10].\n", par);
    system("pause");
    return 0;
}
