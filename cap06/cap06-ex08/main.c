#include <stdio.h>
#include <stdlib.h>
// Faça um programa que preencha um vetor com 10 números reais. Em seguida,
// calcule e mostre na tela a quantidade de números negativos e a soma dos números
// positivos desse vetor.
int main()
{
    float vet[10];
    int i;
    float pos = 0.0;
    int neg = 0;
    printf("Digite 10 valores para armazenar no vetor[10].\n");
    for(i=0; i < 10; i++){
        printf("Valor na Posicao %d: ", i+1);
        scanf("%f", &vet[i]);
        if(vet[i] < 0){
            neg += 1;
        }
        if(vet[i] > 0){
            pos += vet[i];
        }
    }
    printf("\n");
    printf("A quantidade de valores NEGATIVOS sao %d.\n", neg);
    printf("A SOMA de todos os valores POSITIVOS e de %.2f.\n", pos);
    system("pause");
    return 0;
}
