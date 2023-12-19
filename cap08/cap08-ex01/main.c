#include <stdio.h>
#include <stdlib.h>
// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura.
// Em seguida, imprima na tela os dados da estrutura lida.

typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[50];
    int numero;
}cad;

int main()
{
    cad c;
    printf("Leia o nome, a idade e o endereco de uma pessoa.\n");
    printf("Digite o nome: ");
    fgets(c.nome,30,stdin);

    printf("Digite a idade: ");
    scanf("%d",&c.idade);

    setbuf(stdin,NULL);

    printf("Digite o endereco: ");
    fgets(c.endereco,30,stdin);

    printf("Digite o numero: ");
    scanf("%d",&c.numero);

    printf("\nNome: %sIdade: %d\nEndereco: %sNumero: %d\n\n",c.nome, c.idade, c.endereco, c.numero);

    system("pause");
    return 0;
}
