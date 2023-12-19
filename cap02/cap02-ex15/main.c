#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
//uma em cada linha. Use um único comando printf() para cada operação de escrita
//das três variáveis
int main(){
    char letra;
    int x;
    float y;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero com ponto flutuante: ");
    scanf("%f", &y);
    printf("Os seguintes valores foram digitados: \n\t%c\n\t%d\n\t%.2f", letra, x, y);
}
