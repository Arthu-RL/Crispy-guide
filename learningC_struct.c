#include <stdio.h>
#include <string.h>

int i = 7;

void strcopy(char arr1[], char arr2[])
{
    int i = 0;

    while (arr2[i] != '\0')
    {
        arr1[i] = arr2[i];
        i++;
    }
    arr1[i] = '\0';
}

void foo()
{
    extern int i;
    static int count = 0;

    count++;
    i += 100;

    printf("extern variable = %d\n static variable = %d\n\n", i, count);
}

struct player
{
    char name[50];
    int health;
    int xp;
};

int main()
{
    struct player Mage = {"Medhiv", 75, 700};

    printf("\nName: %s\nHealth: %d\nXP: %d\n\n", Mage.name, Mage.health, Mage.xp);

    printf("\n %i", i);
    for (int i = 0; i < 5; i++)
    {
        foo();
    }

    char new_name[50] = {"Dark Medhiv"};
    struct player *ptr = &Mage;

    strcopy(ptr->name, new_name);
    ptr->health = 99;
    ptr->xp = 999;

    printf("\nName: %s\nHealth: %d\nXP: %d\n\n", Mage.name, Mage.health, Mage.xp);

    ptr = NULL;

    return 0;
}