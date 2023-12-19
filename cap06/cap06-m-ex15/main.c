#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia uma matriz A de tamanho 5 × 5.
// Em seguida, calcule e imprima a matriz B, sendo que B = A².
int main()
{
    int matA[5][5];
    int matB[5][5];
    int i,j;

    printf("Calcule e imprima a matriz B, sendo que B = A2.\n");

    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("Digite o valor de matA[%d][%d]: ",i,j);
            scanf("%d", &matA[i][j]);
        }
        printf("\n");
    }

    printf("--Matriz A--\n");
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }

    printf("\n--Matriz B--\n");
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            matB[i][j] = matA[i][j] * matA[i][j];
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
