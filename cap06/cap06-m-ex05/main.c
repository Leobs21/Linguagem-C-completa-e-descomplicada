#include <stdio.h>
#include <stdlib.h>
// Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
// valores negativos ela possui.
int main()
{
    int mat[4][4];
    int i,j;
    int count = 0;
    printf("Armazene valores na mat[4][4] e verifique se existe valor negativo armazenado.\n");
    for(i=0; i < 4 ;i++){
        for(j=0; j < 4 ;j++){
            printf("Digite um valor em mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0){
                count += 1;
            }
        }
    }
    for(i=0; i < 4 ;i++){
        for(j=0; j < 4 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for(i=0; i < 4 ;i++){
        for(j=0; j < 4 ;j++){
            if(mat[i][j] < 0){
                printf("Valor negativo, mat[%d][%d]: %d, ",i,j, mat[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("Valores NEGATIVOS encontrados, total de %d.\n", count);
    system("pause");
    return 0;
}
