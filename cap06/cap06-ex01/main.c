#include <stdio.h>
#include <stdlib.h>
// Crie um programa que leia do teclado seis valores inteiros
// e em seguida mostra na tela os valores lidos.
int main()
{
    int vet[6];
    int i,j;
    printf("Digite seis valores inteiros.\n");
    for(i=0; i < 6; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nOs seis numeros inteiros digitados foram: ");
    for(j=0; j < 6; j++){
        printf("%d ", vet[j]);
    }
    printf("\n");
    system("pause");
    return 0;
}
