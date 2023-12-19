#include <stdio.h>
#include <stdlib.h>
//Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
//valores e apresente o resultado na tela.
int main(){
    int i,n,a,soma;
    printf("Digite 10 numeros.\n");
    for(i=0, soma=0, n = 10; i < n;i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &a);
        soma += a;
    }
    printf("A soma de todos os numeros e %d\n", soma);
    system("pause");
    return 0;
}
