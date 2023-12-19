#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma estrutura representando um atleta.
 * Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
 * Agora, escreva um programa que leia os dados de cinco atletas.
 * Calcule e exiba os nomes do atleta mais alto e do mais velho.
 */

typedef struct{
    char name[100];
    char sport[100];
    int age;
    float height;

}cad_althlete;

int main ()
{
    int count_person = 5;

    cad_althlete person[count_person];

    char older_name[100];
    int older_age;
    float older_height;
    char older_sport[100];

    char height_name[100];
    int height_age;
    float height_height;
    char height_sport[100];

    for(int i = 0; i < count_person; i++)
    {
        setbuf(stdin, NULL);

        printf("Enter the person's name: ");
        fgets(person[i].name, 100, stdin);

        int name_len = strlen(person[i].name);

        if (person[i].name[name_len - 1] == '\n')
        {
            person[i].name[name_len - 1] = '\0';
        }

        printf("Enter %s's age: ", person[i].name);
        scanf("%d", &person[i].age);

        printf("Enter %s's height: ", person[i].name);
        scanf("%f", &person[i].height);

        setbuf(stdin, NULL);

        printf("Enter the name of %s's sport: ", person[i].name);
        fgets(person[i].sport, 100, stdin);

        int sport_len = strlen(person[i].sport);

        if (person[i].sport[sport_len - 1] == '\n')
        {
            person[i].sport[sport_len - 1] = '\0';
        }

        int ref_age = person[i].age;
        float ref_height = person[i].height;

        if (ref_age > older_age)
        {
            strcpy(older_name, person[i].name);
            strcpy(older_sport, person[i].sport);
            older_age = ref_age;
            older_height = ref_height;

        }

        if (ref_height > height_height)
        {
            strcpy(height_name, person[i].name);
            strcpy(height_sport, person[i].sport);
            height_age = ref_age;
            height_height = ref_height;
        }

        printf("\n");
    }
    printf("--The oldest person--\n");
    printf("Name: %s\n", older_name);
    printf("Sport: %s\n", older_sport);
    printf("Age: %d\n", older_age);
    printf("Height: %.2f\n", older_height);
    printf("\n");
    printf("--The tallest person--\n");
    printf("Name: %s\n", height_name);
    printf("Sport: %s\n", height_sport);
    printf("Age: %d\n", height_age);
    printf("Height: %.2f\n", height_height);


    return 0;
}


