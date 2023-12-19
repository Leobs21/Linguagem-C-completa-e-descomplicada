#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma enumeração representando os itens de uma lista de compras.
 * Agora, escreva um programa que leia um valor inteiro do teclado e exiba o nome do item comprado e o seu preço.
*/

typedef struct{
    char name[100];
    float price;
}market;

enum {OVO=1, ARROZ=2, CARNE=3, FRANGO=4, PEIXE=5};

int main()
{
    market product[6];

    product[OVO].price = 1.99;
    product[ARROZ].price = 20.99;
    product[CARNE].price = 70.99;
    product[FRANGO].price = 5.99;
    product[PEIXE].price = 3.99;

    strcpy(product[OVO].name, "OVO");
    strcpy(product[ARROZ].name, "ARROZ");
    strcpy(product[CARNE].name, "CARNE");
    strcpy(product[FRANGO].name, "FRANGO");
    strcpy(product[PEIXE].name, "PEIXE");

    int number;
    do {
        printf("--We have these products available-- \n");
        printf("1. %s $%.2f\n", product[OVO].name, product[OVO].price );
        printf("2. %s $%.2f\n",product[ARROZ].name, product[ARROZ].price);
        printf("3. %s $%.2f\n",product[CARNE].name, product[CARNE].price);
        printf("4. %s $%.2f\n",product[FRANGO].name, product[FRANGO].price);
        printf("5. %s $%.2f\n", product[PEIXE].name, product[PEIXE].price);
        printf("----------------\n");
        printf("Choosen a product available [1-5]: ");
        scanf("%d", &number);

        if (number >= 1 && number < 6)
        {
            for (int i = 1; i <= 5; i++)
            {
                if (number == i)
                {
                    printf("\n");
                    printf("You purchased this product. Thanks!\n");
                    printf("Name: %s\n", product[i].name);
                    printf("Price: $%.2f\n", product[i].price);
                    break;
                }
            }
        } else {
            int ok;
            do{
                printf("Enter a valid number [1-5].\n");
                printf("Press any button (diferent of 0 haha') to back to product list.\n");
                scanf("%d", &ok);
            } while (ok == 0);
        }

    } while (number == 0 || number >= 6);

    return 0;
}
