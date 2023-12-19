#include <stdio.h>
#include <stdlib.h>
// Crie um programa que leia do teclado seis valores inteiros
// e em seguida mostre na tela os valores lidos na ordem inversa
int main()
{
    int vet[6];
    int i,j;
    printf("Digite seis numeros inteiros.\n");
    for(i=0; i < 6 ;i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nOs seis numeros inteiros na ordem inversa: ");
    for(j=5; j >= 0; j--){
        printf("%d ", vet[j]);
    }
    printf("\n");
    system("pause");
    return 0;
}
