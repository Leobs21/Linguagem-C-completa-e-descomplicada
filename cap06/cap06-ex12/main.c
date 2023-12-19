#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
// iguais e os escreva na tela.
int main ()
{
    int size = 10;
    int vet[size];
    int vet2[size];
    int sizeVet2 = 0;
    int i,x;
    int j = 0;
    int k = 0;
    int igual = 0;

    printf("Digite 10 valores para armazenar em vet[10].\n");
    for(i=0; i < size ;i++){
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vet[i]);
    }
    while(j < size){
        x = vet[j];
        for(i=0; i < size ;i++){
            if (x == vet[i]){
                igual += 1;
            }
        }
        if(igual == 1){
            igual = 0;
        }
        if(igual >= 1){
            vet2[k] = x;
            k++;
            sizeVet2 += 1;
        }
        igual = 0;
        j++;
    }
    printf("\n");
    if(sizeVet2 >= 1){
        printf("Os seguintes valores se repetem no vet[10]: \n");
    } else {
        printf("Nao foram armazenados valores iguais no vet[10].");
    }
    for(i=0; i < sizeVet2 ;i++){
        printf("%d ", vet2[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
