#include <stdio.h>
#include <stdlib.h>
// Leia quatro valores do tipo float.
// Calcule e exiba a média aritmética desses valores.
int main(){
    float a,b,c,d;
    printf("Digite 4 numeros reais: ");
    scanf("%f%f%f%f", &a,&b,&c,&d);
    printf("A media desses numeros: %.2f\n", (a + b + c + d) / 4);
    system("pause");
    return 0;
}
