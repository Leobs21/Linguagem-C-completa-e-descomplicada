#include <stdio.h>
#include <stdlib.h>
// Faça um programa que declare uma matriz de tamanho 5 × 5.
// Preencha com 1 a diagonal principal e com 0 os demais elementos.
// Ao final, escreva a matriz obtida na tela.
int main()
{
    //int mat[5][5] = {
    //    {1,0,0,0,0}, {0,1,0,0,0}, {0,0,1,0,0},
    //    {0,0,0,1,0},{0,0,0,0,1}};
    int mat[5][5];
    int i,j;
    printf("Matriz com a diagonal principal com 1.\n");
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            mat[i][i] = 1;
            if (mat[i][j] != 1){
                mat[i][j] = 0;
            }
        }
    }
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
