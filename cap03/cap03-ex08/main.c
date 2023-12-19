#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Leia um valor que represente uma temperatura em graus Celsius e apresente-a
//convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
//32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
int main(){
    float c, f;
    printf("Informe um valor em Celsius: ");
    scanf("%f", &c);
    f = c * (9.0/5.0) + 32.0;
    printf("A conversao para Fahrenheit fica em %.2f\n ", f);
    system("pause");
    return 0;
}
