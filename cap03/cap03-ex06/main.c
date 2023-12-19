#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
//m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a
//velocidade dade em km/h e M em m/s
int main(){
    float km, metros;
    printf("Digite a quantia de kilometro percorrido:");
    scanf("%f", &km);
    metros = km / 36;
    printf("Convertendo para metros por segundo fica em %.2f\n", metros);
    system("pause");
    return 0;
}
