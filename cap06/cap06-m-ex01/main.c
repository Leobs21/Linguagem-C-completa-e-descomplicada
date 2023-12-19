#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
//menor valor contido nessa matriz
int main()
{
    int mat[3][3];
    int i,j,menor;
    printf("Digite os valores de uma matriz de 3x3.\n");
    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
        printf("\n");
    }
    printf("O menor valor digitado foi: %d\n", menor);
    system("pause");
    return 0;
}
