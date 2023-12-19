#include <stdio.h>
#include <stdlib.h>
//Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
//e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
int main(){
    int i, n;
    i = 0;
    for (n = 10; i <= n; n--){
        printf("%d..\n", n);
        if (n == 0){
            printf("FIM\n");
        }
    }
    system("pause");
    return 0;
}
