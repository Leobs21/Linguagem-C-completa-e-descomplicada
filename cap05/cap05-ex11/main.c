#include <stdio.h>
#include <stdlib.h>
//Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo:
//os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.
int main(){
    int n,i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}
