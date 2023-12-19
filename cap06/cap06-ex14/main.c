#include <stdio.h>
#include <stdlib.h>
// Faça um programa que calcule o desvio-padrão "d" de um vetor "V" contendo "n" número
// em que "m" é a média desse vetor. Considere n = 10. O vetor "v" deve ser lido do teclado.             1
int main()
{
    int size = 10;
    int vet[size];
    int i,x,v;
    int n = 0;
    int m = 0;
    int z = 0;
    float y = 1;
    printf("Digite os valores para armazenar no vet[10].\n");
    for(i=0; i < size ;i++){
        printf("Digite o valor de vet[%d]: ", i);
        scanf("%d", &vet[i]);
        n += vet[i];
    }
    m = n / size;
    for(i=0; i < size ;i++){
        x = (vet[i] - m) * (vet[i] - m);
        z += x;
    }
    v = z / size;
    // nao estou usando math.h apenas pelo o desafio e aprender,
    // num projeto real irei usar com certeza.
    // Método de Newton-Raphson pra encontrar raiz quadrada
    for(i=0; i < 10 ;i++){ // 10 iteraçoes apenas pra testes por enquanto
        y = (y + v / y) / 2;
    }
    printf("Desvio Padrao = V%d ~%.2f\n", v, y);

    system("pause");
    return 0;
}
