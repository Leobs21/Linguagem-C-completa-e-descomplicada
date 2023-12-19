#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia uma matriz de tamanho 5 × 5.
// Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária.
// Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
// Imprima na tela a diferença entre os dois valores.
int main()
{
    int mat[5][5];
    int i,j,diferenca;
    int k = 4;
    int somaElem = 0;
    int somaElemDiag = 0;

    printf("Soma os elementos das diagonais e tambem do restante e tira a diferenca.\n");

    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("Digite o valor de mat[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
            somaElem += mat[i][j];
        }
        somaElemDiag += mat[i][i] + mat[i][k];
        somaElem -= mat[i][i] + mat[i][k];
        k--;
        printf("\n");
    }
    for(i=0; i < 5 ;i++){
        for(j=0; j < 5 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    somaElem += mat[2][2];//elemento do meio e somado novamente pois e subtraido duas vezes
    somaElemDiag -= mat[2][2];//elemento do meio e subtraido novamente pois e somado duas vezes
    diferenca = somaElem - somaElemDiag;

    printf("A soma dos elementos que nao pertencem a diagonais e de %d.\n", somaElem);
    printf("A soma dos elementos das diagonais e de %d.\n", somaElemDiag);
    printf("A diferenca entre elementos das diagonais e nao diagonais e de %d.\n", diferenca);

    system("pause");
    return 0;
}
