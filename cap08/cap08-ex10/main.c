#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
 * dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
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

        printf("\n");
    }

    for(int i = 0; i < count_person - 1; i++)
    {
        for(int j = 0; j < count_person - i - 1; j++)
        {
            if(person[j].age < person[j + 1].age)
            {
                char temp_name[100];
                strcpy(temp_name, person[j].name);
                strcpy(person[j].name, person[j + 1].name);
                strcpy(person[j + 1].name, temp_name);

                char temp_sport[100];
                strcpy(temp_sport, person[j].sport);
                strcpy(person[j].sport, person[j + 1].sport);
                strcpy(person[j + 1].sport, temp_sport);

                int temp_age = person[j].age;
                person[j].age = person[j + 1].age;
                person[j + 1].age = temp_age;

                float temp_height = person[j].height;
                person[j].height = person[j + 1].height;
                person[j + 1].height = temp_height;
            }
        }
    }
    for(int i = 0; i < count_person; i++)
    {
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Height: %.2f\n", person[i].height);
        printf("Sport: %s\n", person[i].sport);
        printf("\n");
    }
    return 0;
}

