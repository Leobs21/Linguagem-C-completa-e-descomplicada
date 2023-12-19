#include <stdio.h>
#include <stdlib.h>
// Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
// contidos em sua diagonal principal.
int main()
{
    int mat[3][3];
    int i,j;
    int soma = 0;
    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            printf("Digite o valor em mat[%d][%d]: ", i,j);
            scanf("%d",&mat[i][j]);
        }
        soma += mat[i][i];
    }
    printf("\n");
    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("A soma dos valores contidos na diagonal principal e de %d.\n", soma);
    system("pause");
    return 0;
}
