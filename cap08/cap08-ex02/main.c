#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
// Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).

// Não ficou claro como seria essa medicao, então opitei por usar "distancia euclideana"
typedef struct plano{
    int x;
    int y;
}ponto;

int main()
{
    ponto a = {0,0};
    ponto b;

    int distancia;

    printf("Digite o valor de ponto B.x: ");
    scanf("%d",&b.x);

    printf("Digite o valor de ponto B.y: ");
    scanf("%d",&b.y);

    // calculo de "distancia euclideana"
    distancia = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));

    printf("\nA distancia entre o ponto de origem(ponto A(0,0)) e ponto B(%d,%d): %d\n\n", b.x, b.y, distancia);

    system("pause");
    return 0;
}
// plano cartesiano
// exemplo de imput do ponto b, sendo x = 3, y = 4
/*
    5
    4     x
    3
    2
    1
  y 0 1 2 3 4 5
    x
*/
