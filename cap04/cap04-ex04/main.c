#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia o salário de um trabalhador e o valor da prestação de
//um empréstimo. Se a prestação:
//  • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
//  • Caso contrário, imprima: “Empréstimo concedido.”
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
