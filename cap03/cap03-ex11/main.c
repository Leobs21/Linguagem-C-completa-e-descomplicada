#include <stdio.h>
#include <stdlib.h>
//Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
//correspondente. A área do círculo é A = π * raio2, sendo π = 3.141592.
int main(){
    #define PI 3.141592
    float raio, area;
    printf("Digite um valor do raio de um circulo: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("A area do circulo e %.3f\n", area);
    system("pause");
    return 0;
}
