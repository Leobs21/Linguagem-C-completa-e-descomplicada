#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
// Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.

typedef struct plano{
    int x;
    int y;
}ponto;

// Ao contrario do exercicio anterior, esse eu usei "for" e um "array" apenas pra testar o aprendizado
int main()
{
    ponto p[2];

    for(int i=0; i < 2 ;i++){
        printf("--- Ponto %c ---\n",65+i);

        printf("Digite o valor de ponto %c.x: ",65+i);
        scanf("%d",&p[i].x);

        printf("Digite o valor de ponto %c.y: ",65+i);
        scanf("%d",&p[i].y);
    }

    int distancia = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));

    printf("\nA distancia entre o ponto A(%d,%d)) e ponto B(%d,%d): %d\n\n", p[0].x, p[0].y, p[1].x, p[1].y, distancia);

    system("pause");
    return 0;
}
