#include <stdio.h>
#include <stdlib.h>
// Calcular e imprimir na tela uma matriz de tamanho 10 � 10,
// em que seus elementos s�o da forma:
// A[i][j] = 2i + 7j � 2 se i < j
// A[i][j] = 3i� � 1 se i = j
// A[i][j] = 4i� + 5j� + 1 se i > j
int main()
{
    int mat[10][10];
    int i,j;
    printf("Calcular e imprimir na tela uma mat[10][10].\n");
    for(i=0; i < 10 ;i++){
        for(j=0; j < 10 ;j++){
            if(i < j){
                mat[i][j] = 2*i+7*j-2;
            }
            if(i == j){
                mat[i][j] = 3*i*i-1;
            }
            if(i > j){
                mat[i][j] = 4*i*i*i+5*j*j+1;
            }
        }
    }
    for(i=0; i < 10 ;i++){
        for(j=0; j < 10 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
