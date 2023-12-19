#include <stdio.h>
#include <stdlib.h>
//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
//em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que
//ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
//de erro.
//  Estado MG SP RJ MS
//  Imposto 7% 12% 15% 8
int main(){
    int estado;
    float price, product, imposto;
    printf("Qual o estado de destino do produto [0 mg,1 sp,2 rj,3 ms]: ");
    scanf("%d", &estado);
    printf("Qual o valor do produto a venda: ", price);
    scanf("%f", &price);
    switch (estado){
        case 0:
            imposto = 0.07; // 7% de imposto
            break;
        case 1:
            imposto = 0.12; // 12% de imposto
            break;
        case 2:
            imposto = 0.15; // 15% de imposto
            break;
        case 3:
            imposto = 0.08; // 8% de imposto
            break;
        default: printf("Digite um numero valido entre 0 e 3!\n");
    }
    product = price * imposto + price;
    imposto *= 100;
    if (estado <= 3)
        printf("O valor do produto de %.2f mais imposto de %%%.1f fica no total de %.2f\n", price, imposto, product);
    system("pause");
    return 0;
}
