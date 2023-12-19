#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
// valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
// deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
int main()
{
    float vet[8];
    float soma = 0.0;
    int x,y,i;
    printf("Digite oito valores pra armazenar no vetor[8].\n");
    for(i=0; i < 8 ;i++){
        printf("Valor na Posicao %d: ", i+1);
        scanf("%f", &vet[i]);
    }
    printf("Escolha duas posicoes do vetor[8](0 a 7): ");
    scanf("%d%d",&x, &y);
    soma += vet[x] + vet[y];
    printf("A soma dos valores nas posicoes vetor[%d] e vetor[%d] e de %.2f.\n", x,y,soma);
    system("pause");
    return 0;
}
