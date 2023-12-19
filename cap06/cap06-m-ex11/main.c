#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia uma matriz de tamanho 5 × 5.
// Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal.
int main()
{
    int mat[5][5];
    int i,j;
    int soma = 0;
    printf("Calcule e imprima a soma dos elementos acima da diagonal principal.\n");
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
            if(j >= i+1 && i < 4){
                soma += mat[i][j];
            }
        }
        printf("\n");
    }
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma dos elementos acima da diagonal principal e %d.\n", soma);
    system("pause");
    return 0;
}
