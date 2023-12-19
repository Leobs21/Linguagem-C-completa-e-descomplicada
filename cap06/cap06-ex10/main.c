#include <stdio.h>
#include <stdlib.h>
// Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
// números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
int main()
{
    int vet[100];
    int i = 0;
    int nn = 0; //numeros naturais
    printf("Esse programa contem um vetor[100] com os 100 primeiros numeros naturais que NAO sao MULTIPLOS de 7.\n");
    while(1){
        if(i % 7 > 0){
            vet[nn] = i;
            nn += 1;
        }
        if(nn == 100){
            break;
        }
        i++;
    }
    printf("--\n");
    for(int j=0; j < 100; j++){
        printf("%d ", vet[j]);
    }
    printf("..\n");
    system("pause");
    return 0;
}
