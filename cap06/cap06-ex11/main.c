#include <stdio.h>
#include <stdlib.h>
// Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
// vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.
int main()
{
    float vet[3];
    float quadrado[3];
    float n;
    int i, j;
    printf("Digite vinte numeros reais para ser armazenado no vet[20].\n");
    for(i=0; i < 3 ;i++){
        printf("Valor no Indice %d: ", i);
        scanf("%f", &vet[i]);
        quadrado[i] = vet[i] * vet[i];
    }
    printf("\n");
    printf("O resultado dos elementos de vet[20] ao quadrado foram armazenados em quadrado[20].\n");
    for(j=0; j < 3 ;j++){
        printf("Valor no Indice %d de quadrado[20]: %.2f\n", j, quadrado[j]);
    }
    system("pause");
    return 0;
}
