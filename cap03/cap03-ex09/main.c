#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
//conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π =
//3.141592.
int main(){
    float r,g;
    #define PI 3.141592
    printf("Digite um valor de um angulo em graus: ");
    scanf("%f", &g);
    r = g * PI / 180;
    printf("O angulo convetido em radianos fica em %.6f\n", r);
    system("pause");
    return 0;
}
