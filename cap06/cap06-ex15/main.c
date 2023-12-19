#include <stdio.h>
#include <stdlib.h>
// Leia um vetor com 10 números de ponto flutuante.
// Em seguida, ordene os elementos desse vetor e imprima o vetor na tela
int main()
{
    int size = 10;
    float vet[size];
    int i,j;
    float temp;
    printf("Digite 10 valores com ponto flutuante para armazenar no vet[10].\n");
    for(i=0; i < size ;i++){
        printf("Digite o valor do vet[%d]: ", i);
        scanf("%f", &vet[i]);
    }
    for(i=0; i < size - 1 ;i++){
        for(j=0; j < size - i - 1 ;j++){
            if(vet[j] > vet[j+1]){
               temp = vet[j];
               vet[j] = vet[j+1];
               vet[j+1] = temp;
            }
        }
    }
    printf("\nO vet[10] foi ordenado do MENOR pro MAIOR.\n");
    for(i=0; i < size ;i++){
        printf("%.2f ", vet[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
