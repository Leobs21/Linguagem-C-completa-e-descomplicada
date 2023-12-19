#include <stdio.h>
#include <stdlib.h>
//Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
//O volume de um cilindro circular é calculado por meio da seguinte fórmula:
//V = π * raio2 * altura, em que π = 3.141592
int main(){
    #define PI 3.141592
    float altura, raio, volume;
    printf("Digite o raio de um cilindro circular: ");
    scanf("%f", &raio);
    printf("Digite a altura de um cilindro circular: ");
    scanf("%f", &altura);
    volume = PI * ((raio * raio) * altura);
    printf("O volume de um cilindro circular e de %.2f\n", volume);
    system("pause");
    return 0;
}
