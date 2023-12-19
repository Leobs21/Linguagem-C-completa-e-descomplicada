#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
//maior valor contido nessa matriz e a sua localização (linha e coluna).
int main()
{
    int mat[4][4];
    int matIndex[2];
    int i,j;
    int maior = 0;
    printf("Digite valores a serem armazenados na mat[4][4].\n");
    for(i=0; i < 4 ;i++){
        for(j=0; j < 4 ;j++){
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i < 4 ;i++){
        for(j=0; j < 4 ;j++){
            printf("%d ", mat[i][j]);
            if(maior < mat[i][j]){
                maior = mat[i][j];
                matIndex[0] = i;
                matIndex[1] = j;
            }
        }
        printf(" | ");
    }
    printf("\nO maior valor digitado foi: %d\n", maior);
    printf("Sua localizacao na matriz e: mat[%d][%d]\n", matIndex[0], matIndex[1]);
    system("pause");
    return 0;
}
