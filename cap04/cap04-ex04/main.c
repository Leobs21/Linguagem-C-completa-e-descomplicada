#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de
//um empr�stimo. Se a presta��o:
//  � For maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.�
//  � Caso contr�rio, imprima: �Empr�stimo concedido.�
int main(){
    int sal, prest;
    printf("Digite o valor do salario e o valor da prestacao: ");
    scanf("%d%d", &sal, &prest);
    if(prest > sal * 0.20)
        printf("Emprestimo nao concedido.\n");
    else
        printf("Emprestimo concedido.\n");
    system("pause");
    return 0;
}
