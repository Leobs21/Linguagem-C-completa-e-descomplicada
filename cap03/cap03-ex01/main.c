#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("O antecessor do numero digitado: %d\n", x - 1);
    printf("O sucessor do numero digitado: %d\n", x + 1);
    system("pause");
    return 0;
}
