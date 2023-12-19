#include <stdio.h>
#include <stdlib.h>
// Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
// Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
// o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.
int main()
{
    int mat[10][3];
    int menor;
    int i,j,k;
    int count = 0;
    int prova1 = 0;
    int prova2 = 0;
    int prova3 = 0;
    printf("Armazene as notas dos alunos de cada prova e printa na tela a pior nota.\n");
    printf("--Prova = 1 2 3\n");
    printf("----------------\n");
    for(i=0; i < 10 ;i++){
        printf("Aluno %d = ", i+1);
        for(j=0; j < 3 ;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i < 10 ;i++){
        for(j=0; j < 3 ;j++){
            menor = mat[i][j];
            for(k=0; k < 3 ;k++){
                if(menor < mat[i][k]){
                    count += 1;
                }
            }
            if(count == 2){
                if (mat[i][0] == menor){
                    prova1 += 1;
                } else if(mat[i][1] == menor){
                    prova2 += 1;
                } else {
                    prova3 += 1;
                } break;
            } else if (count == 1){
                count = 0;
            }
        }
        count = 0;
    }
    printf("\nNa primeira Prova, %d alunos tiveram piores notas.\n", prova1);
    printf("Na segunda Prova, %d alunos tiveram piores notas.\n", prova2);
    printf("Na terceira Prova, %d alunos tiveram piores notas.\n", prova3);

    system("pause");
    return 0;
}
