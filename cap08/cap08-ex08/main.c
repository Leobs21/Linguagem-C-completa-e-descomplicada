#include <stdio.h>
#include <string.h>

struct date_of_birth{
    int day;
    int month;
    int year;
};

typedef struct{
    char name[30];
    struct date_of_birth birth;
}people;

struct list_order{
    char name[7];
};

int main()
{

    int count_people = 6;
    struct list_order order[count_people];

    strcpy(order[0].name,"First");
    strcpy(order[1].name,"Second");
    strcpy(order[2].name,"Third");
    strcpy(order[3].name,"Fourth");
    strcpy(order[4].name,"Fifth");
    strcpy(order[5].name,"Sixth");

    people people[count_people];

    //(placeholder) i will consider older birth below of 2023
    int older_day = 31;
    int older_month = 12;
    int older_year = 2023;

    //(placeholder) i will consider youngest birth above of 1889
    int youngest_day = 1;
    int youngest_month = 1;
    int youngest_year = 1889;

    int ref_day;
    int ref_month;
    int ref_year;

    printf("Creates a structure with name and date of birth of SIX people.\n");

    for (int i = 0; i < count_people; i++)
    {
        setbuf(stdin,NULL);

        int len_order = strlen(order[i].name);

        order[i].name[len_order] = '\0';

        printf("Enter the %s person's name: ",order[i].name);

        fgets(people[i].name,30,stdin);
        int len = strlen(people[i].name);

        if(people[i].name[len - 1] == '\n')
        {
            people[i].name[len - 1] = '\0';
        }

        printf("Enter %s's date of birth (day/month/year): ", people[i].name);
        scanf("%d/%d/%d", &people[i].birth.day, &people[i].birth.month, &people[i].birth.year);

        ref_day = people[i].birth.day;
        ref_month = people[i].birth.month;
        ref_year = people[i].birth.year;

        /*check who is the oldest*/
        if (ref_year < older_year)
        {
            older_year = ref_year;
            older_month = ref_month;
            older_day = ref_day;
        } else if(ref_year == older_year){
            older_year = ref_year;
            if(ref_month < older_month)
            {
                older_month = ref_month;
                older_day = ref_day;
            } else if(ref_day < older_day){
                older_day = ref_day;
                older_month = ref_month;
            }
        }

        /*check who is the youngest*/
        if(ref_year > youngest_year)
        {
            youngest_day = ref_day;
            youngest_month = ref_month;
            youngest_year = ref_year;
        } else if(ref_year == youngest_year){
            youngest_year = ref_year;
            if(ref_month > youngest_month)
            {
                youngest_month = ref_month;
                youngest_day = ref_day;
            } else if (ref_day > youngest_day){
                youngest_day = ref_day;
                youngest_month = ref_month;
            }
        }

    }

    printf("\n");
    printf("Older: %d/%d/%d\n", older_day, older_month, older_year);
    printf("Youngest: %d/%d/%d\n", youngest_day, youngest_month, youngest_year);
    printf("\n");

    for(int i = 0; i < count_people; i ++)
    {
        ref_day = people[i].birth.day;
        ref_month = people[i].birth.month;
        ref_year = people[i].birth.year;

        if(older_year == ref_year)
        {
            if(older_month == ref_month)
            {
                if(older_day == ref_day)
                {
                    printf("--The oldest person--\n");
                    printf("Name: %s\n", people[i].name);
                    printf("Date of Birth: %d/%d/%d\n", ref_day, ref_month, ref_year);
                }
            }
        }
    }

    printf("\n");

    for(int i = 0; i < count_people; i ++)
    {
        ref_day = people[i].birth.day;
        ref_month = people[i].birth.month;
        ref_year = people[i].birth.year;

        if(youngest_year == ref_year)
        {
            if(youngest_month == ref_month)
            {
                if(youngest_day == ref_day)
                {
                    printf("--The youngest person--\n");
                    printf("Name: %s\n", people[i].name);
                    printf("Date of Birth: %d/%d/%d\n", ref_day, ref_month, ref_year);
                }
            }
        }
    }

    return 0;
}






