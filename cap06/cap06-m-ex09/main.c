#include <stdio.h>
#include <stdlib.h>
// Fa�a um programa que permita ao usu�rio entrar com uma matriz de tamanho 3 � 3 de n�meros inteiros. Em seguida, calcule um vetor contendo tr�s posi��es, em
// que cada posi��o dever� armazenar a soma dos n�meros de cada coluna da matriz.
// Exiba na tela esse array. Por exemplo, a matriz
//                                      5  -8  10
//                                      1   2  15
//                                      25 10   7
//                dever� gerar o vetor
//                                      31  4  32
int main()
{
    int mat[3][3];
    int soma = 0;
    int i,j;
    printf("Armazene valores na mat[3][3] e soma os valores de cada coluna.\n");
    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            printf("Digite o valor para mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma das colunas fica em:\n");
    for(i=0; i < 3 ;i++){
        for(j=0; j < 3 ;j++){
            soma += mat[j][i];
        }
        printf("%d ", soma);
        soma = 0;
    }
    printf("\n");

    system("pause");
    return 0;
}
