#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
// mostre todos os valores lidos juntamente com a média dos valores.
int main()
{
    float vet[5];
    float media, soma;
    int i, j;
    printf("Digite cinco valores.\n");
    for(i=0; i < 5 ;i++){
        printf("Numero %d: ", i+1);
        scanf("%f", &vet[i]);
        soma += vet[i];
    }
    printf("\n");
    printf("Valores lidos: ");
    for(j=0; j < 5; j++){
        printf("%.2f ", vet[j]);
    }
    media = soma / 5;
    printf("\nA media dos valores lidos e de %.2f.\n", media);
    system("pause");
    return 0;
}
