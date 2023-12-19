#include <stdio.h>
#include <stdlib.h>
// Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
// valores maiores do que 10 ela possui.
int main()
{
    int mat[4][4];
    int i,j;
    int count = 0;
    printf("Armazene valores na mat[4][4] e conta os valores maiores que 10.\n");
    for(i=0; i < 4 ;i++){
        for(j=0; j < 4 ;j++){
            printf("Digite o valor de mat[%d][%d] ", i,j);
            scanf("%d",&mat[i][j]);
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
            if (mat[i][j] > 10){
                count += 1;
                printf("Numero MAIOR que 10 encontrado em mat[%d][%d]: %d\n",i,j,mat[i][j]);
            }
        }
    }
    printf("\n");
    if(count > 0){
        printf("Valores MAIORES do que 10 armazenado na matriz, total de %d\n", count);
    } else {
        printf("Nao foram armazenados valores MAIORES do que 10 na matriz.\n");
    }
    system("pause");
    return 0;
}
