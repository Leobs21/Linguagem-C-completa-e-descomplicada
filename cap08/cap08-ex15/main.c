#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Crie uma união contendo dois tipos básicos diferentes.
 * Agora, escreva um programa que inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo.*/

union basic_types {
    short int x;
    unsigned char c;
};

int main()
{
    union basic_types t;
    int choose;

    printf("Using \"union\".Enter an integer number and print the value of the second basic type.\n");

    do {
        printf("\n1. Short Int.\n");
        printf("2. Unsigned char.\n");
        printf("Choose an option above: ");
        scanf("%d", &choose);

        if(choose == 1)
        {
            printf("Enter an integer 2 bytes number: ");
            scanf("%hd", &t.x);
        } else if(choose == 2) {
            printf("Enter an integer 1 byte number (char): ");
            scanf("%d", &t.c);
            choose = 2;
        } else {
            printf("\nChoose options 1 or 2!\n");
        }
    } while (choose != 1 && choose != 2);

    printf("\n-- Result --\n");
    printf("(2 bytes) short integer = %d\n", t.x);
    printf("(1 byte) unsigned char = %d\n", t.c);

    return 0;
}
