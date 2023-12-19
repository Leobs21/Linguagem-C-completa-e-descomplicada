#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia uma matriz de tamanho 5 × 5.
// Calcule e imprima a soma dos elementos dessa matriz que não pertencem
// à diagonal principal nem à diagonal secundária.
int main()
{
    int mat[5][5];
    int i,j;
    int k = 4;
    int soma = 0;
    printf("Calcule e imprima a soma dos elementos que nao pertencem as diagonais.\n");
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("%d ", mat[i][j]);
            soma += mat[i][j];
        }
        soma -= mat[i][i] + mat[i][k];
        k--;
        printf("\n");
    }
    soma += mat[2][2];
    printf("\nA soma dos elementos e de %d.\n", soma);
    system("pause");
    return 0;
}
