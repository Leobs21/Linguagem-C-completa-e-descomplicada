#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Crie uma estrutura chamada Retângulo.
// Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo.
// Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
// Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.

struct ponto{
    int x;
    int y;
};

struct retangulo{
    int pse[2]; // ponto superior esquerdo
    int pid[2]; // ponto inferior direito
    struct ponto p;
} rec;

int main()
{
    int s_ponto_x = rec.pse[rec.p.x];
    int s_ponto_y = rec.pse[rec.p.y];

    int b_ponto_x = rec.pid[rec.p.x];
    int b_ponto_y = rec.pid[rec.p.y];

    printf("Digite o valor de X e Y para o ponto inferior direito(x y): ");
    scanf("%d %d",&b_ponto_x, &b_ponto_y);
    printf("Digite o valor de X e Y para ponto superior esquerdo(x y): ");
    scanf("%d %d",&s_ponto_x, &s_ponto_y);

    printf("\nRetangulo: Ponto inferior direito(%d,%d)\n", b_ponto_x, b_ponto_y);
    printf("Retangulo: Ponto superior esquerdo(%d,%d)\n", s_ponto_x, s_ponto_y);

    // a ordem influencia no calculo da area e do perimetro
    float base;
    if(b_ponto_x < s_ponto_x){
        base = s_ponto_x - b_ponto_x;
    } else{
        printf("\nTrocando a ordem para o calculo da base..\n");
        base = b_ponto_x - s_ponto_x;
    }

    // a ordem influencia no calculo da area e do perimetro
    float altura;
    if(b_ponto_y < s_ponto_y){
        altura = s_ponto_y - b_ponto_y;
    }else{
        printf("\nTrocando a ordem para o calculo da altura..\n");
        altura = b_ponto_y - s_ponto_y;
    }

    printf("\nbase = %.2f altura = %.2f\n\n", base, altura);

    int retangulo_perimetro = 2 * (base + altura);
    printf("Perimetro do Retangulo: %d\n", retangulo_perimetro);

    int retangulo_area = base * altura;
    printf("Area do retangulo: %d\n", retangulo_area);

    float retangulo_diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    printf("Diagonal do Retangulo: %.3f\n\n", retangulo_diagonal);

    system("pause");
    return 0;
}
/*
exemplo
 2,4 -- x
 |      |
 x -- 5,2

carteseano
   5
   4   x
   3
   2         x
   1
 x 0 1 2 3 4 5
   y
*/
