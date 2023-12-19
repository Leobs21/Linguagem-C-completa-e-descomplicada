#include <stdio.h>
#include <stdlib.h>
// Fa�a um programa que leia uma matriz de tamanho 6 � 6.
// Calcule e imprima a soma dos elementos dessa matriz que est�o abaixo da diagonal principal.
int main()
{
    int mat[6][6];
    int i,j;
    int soma = 0;
    printf("Calcule e imprima a soma dos elementos abaixo da diagonal principal.\n");
    for(i=0; i < 6 ;i++){
        for(j=0; j < 6 ;j++){
            printf("Digite o valor de mat[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
            if(i >= 1 && j < i){
                soma += mat[i][j];
            }
        }
        printf("\n");
    }
    for(i=0; i < 6 ;i++){
        for(j=0; j < 6 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma dos elementos abaixo da diagonal principal e %d.\n", soma);
    system("pause");
    return 0;
}
