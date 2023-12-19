#include <stdio.h>
#include <stdlib.h>
// Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
// contidos em sua diagonal secundária
int main()
{
    int mat[3][3];
    int i,j;
    int soma = 0;
    printf("Armazene valores na mat[3][3] e some os valores na diagonal secundaria.\n");
    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            printf("Digite o valor em mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
        j = 2-i;
        soma += mat[i][j];
        printf("\n");
    }
    for(i=0; i < 3 ;i++){
       for(j=0; j < 3 ;j++){
           printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("A soma dos valores contidos na diagonal secundaria e de %d.\n", soma);
    system("pause");
    return 0;
}
