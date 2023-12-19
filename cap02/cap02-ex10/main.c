#include <stdio.h>
#include <stdlib.h>
//Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
//(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\)
int main(){
    int dia, mes, ano;
    printf("Informe a data atual (dia/mes/ano): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data informada: %d\/%d\/%d\n", dia, mes, ano);
    system("pause");
    return 0;
}
