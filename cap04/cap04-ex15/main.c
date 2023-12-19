#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
//seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
//calculadas como
//em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo
//grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
//Do contrário, imprima:
//• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
//• Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
//• Se ∆ > 0, existem duas raízes reais. Imprima as raízes
int main(){
    int a, b, c; // coeficientes
    float x1, x2, delta;
    printf("Digite o valor de A, B, C: ");
    scanf("%d%d%d", &a, &b, &c);
    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (a == 0)
        printf("Nao e equacao de segundo grau.\n");
    else
        // a = 1, b = 2, c = 3
        if (delta < 0)
            printf("Nao existe raiz\n");
        //a = 1, b = 6, c = 9
        if (delta == 0)
            printf("Raiz unica\n");
        //a = 1, b = 12, c = -13
        if (delta > 0)
            printf("Existem duas raizes:\nx1 = %.2f, x2 = %.2f\n", x1 , x2);

    system("pause");
    return 0;
}
