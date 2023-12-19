#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
// Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista.
// Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
int main()
{
    char str1[100];
    float desconto = 0.10;
    float valorTotal;
    float valorVista;

    setbuf(stdin, NULL);

    printf("Leia o nome e o valor de uma marcadoria de uma loja.\n");
    printf("Digite o nome da mercadoria: ");
    gets(str1);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valorTotal);
    printf("\n");

    float valorDescontado = valorTotal * desconto;

    int inteiro = valorDescontado * 100;
    float valorDescontoTruncado = (float)inteiro / 100;

    valorVista = valorTotal - valorDescontoTruncado;

    printf("Nome da mercadoria: %s\n",str1);
    printf("Valor da mercadoria: %.2f\n",valorTotal);
    printf("Valor do desconto(10%%): %.2f\n", valorDescontoTruncado);
    printf("Valor a ser pago a vista com desconto(10%%): %.2f\n",valorVista);

    system("pause");
    return 0;
}
