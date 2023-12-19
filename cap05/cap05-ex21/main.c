#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia certa quantidade de números, imprima o maior
//deles e quantas vezes o maior número foi lido. A quantidade de números a serem
//lidos deve ser fornecida pelo usuário.
int main()
{
    int n;
    int nm = 0;
    int i = 0;
    float x;
    float maior = 0.0;
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);
    while(n > i){
        printf("Numero %d: ", i+1);
        scanf("%f", &x);
        if (x > maior){
            nm += 1;
            maior = x;
        }
        i++;
    }
    printf("A quantidade de vezes que o maior numero foi lido foi %d. \n", nm);
    system("pause");
    return 0;
}
