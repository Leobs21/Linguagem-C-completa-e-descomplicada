#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo.
// Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.

struct ponto{
    int x;
    int y;
};

struct retangulo{
    int pse[2]; // ponto superior esquerdo
    int pid[2]; // ponto inferior direito
    struct ponto p;
} rec1, rec2;

int main()
{
    // retangulo maior
    int rec1_ponto_superior_x = rec1.pse[rec1.p.x];
    int rec1_ponto_superior_y = rec1.pse[rec1.p.y];

    int rec1_ponto_base_x = rec1.pid[rec1.p.x];
    int rec1_ponto_base_y = rec1.pid[rec1.p.y];

    // retangulo menor
    int rec2_ponto_superior_x = rec2.pse[rec2.p.x];
    int rec2_ponto_superior_y = rec2.pse[rec2.p.y];

    int rec2_ponto_base_x = rec2.pid[rec2.p.x];
    int rec2_ponto_base_y = rec2.pid[rec2.p.y];

    printf("RETANGULO 1: Digite o valor de X e Y para o ponto inferior direito(x y): ");
    scanf("%d %d",&rec1_ponto_base_x, &rec1_ponto_base_y);
    printf("RETANGULO 1: Digite o valor de X e Y para ponto superior esquerdo(x y): ");
    scanf("%d %d",&rec1_ponto_superior_x, &rec1_ponto_superior_y);

    printf("\nRETANGULO 2: Digite o valor de X e Y para o ponto inferior direito(x y): ");
    scanf("%d %d",&rec2_ponto_base_x, &rec2_ponto_base_y);
    printf("RETANGULO 2: Digite o valor de X e Y para ponto superior esquerdo(x y): ");
    scanf("%d %d",&rec2_ponto_superior_x, &rec2_ponto_superior_y);

    float rec1_base;
    rec1_base = rec1_ponto_base_x - rec1_ponto_superior_x;

    float rec1_altura;
    rec1_altura = rec1_ponto_superior_y - rec1_ponto_base_y;

    float rec2_base;
    rec2_base = rec2_ponto_base_x - rec2_ponto_superior_x;

    float rec2_altura;
    rec2_altura = rec2_ponto_superior_y - rec2_ponto_base_y;

    /* retangulo maior */
    printf("\nrec1 ponto base: x%d,y%d\nrec1 ponto superior: x%d,y%d\n", rec1_ponto_base_x, rec1_ponto_base_y, rec1_ponto_superior_x, rec1_ponto_superior_y);

    /* retangulo menor */
    printf("rec2 ponto base: x%d,y%d\nrec2 ponto superior: x%d,y%d\n", rec2_ponto_base_x, rec2_ponto_base_y, rec2_ponto_superior_x, rec2_ponto_superior_y);

    /* retangulo maior */
    printf("\nrec1 base: %.2f\nrec1 altura: %.2f\n",rec1_base, rec1_altura);

    /* retangulo menor*/
    printf("\nrec2 base: %.2f\nrec2 altura: %.2f\n",rec2_base, rec2_altura);

    if(rec2_ponto_base_x < rec1_ponto_base_x && rec2_ponto_base_x > rec1_ponto_superior_x && rec2_ponto_base_y > rec1_ponto_base_y){
        printf("Rentagulo 2 esta contido no Retangulo 1\n");
    }else if(rec2_ponto_superior_x > rec1_ponto_superior_x && rec2_ponto_superior_x < rec1_ponto_base_x && rec2_ponto_superior_y < rec1_ponto_base_y){
        printf("Rentagulo 2 esta contido no Retangulo 1\n");
    }else{
        printf("Rentagulo 2 NAO esta contido no Retangulo 1\n");
    }

    system("pause");
    return 0;
}
/*
carteseano
   5   x     -
   4     x -
   3     - x
   2   -     x
   1
 x 0 1 2 3 4 5
   y
*/

/*
exemplo
 2,5 -------- x
 |  3,4 -- x  |
 |  |      |  |
 |  x -- 4,3  |
 x -------- 5,2
*/
