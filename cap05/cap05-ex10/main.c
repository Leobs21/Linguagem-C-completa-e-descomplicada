#include <stdio.h>
#include <stdlib.h>
//faça um programa que leia 10 inteiros positivos,
//ignorando não positivos, e imprima sua média
int main(){
    int i,n;
    int positivo = 0;
    int j = 10;
    float media;
    printf("Digite 10 numeros inteiros positivo ou negativo.\n");
    printf("O programa ira printar a media somente dos numeros positivos.\n");
    for (i = 0; i < j; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &n);
        if (n > 0){
            positivo += 1;
            media += (float) n;
        }
    }
    if (positivo > 0){
        printf("A media dos numeros positivos foi de %.2f.\n", media/positivo);
    } else {
        printf("Foram digitados apenas numeros negativos ou somente ZEROS.\n");
    }
    system("pause");
    return 0;
}
