#include <stdio.h>
#include <stdlib.h>
// Faça um programa que receba do usuário dois arrays, A e B,
// com 10 números inteiros cada. Crie um novo array C calculando C = A - B.
// Mostre na tela os dados do array C.
int main()
{
    int vetA[10], vetB[10], vetC[10];
    int i,j,k;
    printf("-- Valores para armazenar no vetorA[10] --");
    printf("\n");
    for(i=0; i < 3 ;i++){
        printf("Valor na Posicao %d do vetorA[10]: ", i+1);
        scanf("%d", &vetA[i]);
    }
    printf("\n");
    printf("-- Valores para armazenar no vetorB[10] --");
    printf("\n");
    for(j=0; j < 3 ;j++){
        printf("Valor na Posicao %d do vetorB[10]: ", j+1);
        scanf("%d", &vetB[j]);
    }
    printf("\n");
    printf("-- Resultado de vetorC = vetorA - vetorB --\n");
    for(k=0; k < 3 ;k++){
        vetC[k] = vetA[k] - vetB[k];
        printf("Valores na Posicao %d do vetorC[10]: %d. \n", k+1, vetC[k]);
    }
    printf("\n");
    system("pause");
    return 0;
}
