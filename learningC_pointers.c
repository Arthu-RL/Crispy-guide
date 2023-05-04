#include <stdio.h>

void increment(int **ptr)
{
    (**ptr)++;
}

int main()
{
    int num = 15;
    int *ptr = &num;
    int **ptr1 = &ptr;

    printf("\nAddress of the variable num: %p\n", &num);
    printf("Address of the variable pointer ptr: %p\n", &ptr);
    printf("Address of the variable that's pointing ptr: %p\n\n", &ptr1);

    printf("Value of num: %d\n", num);
    printf("Value being pointed by ptr: %d\n", *ptr);
    printf("Value being pointed by ptr: %d\n", **ptr1);

    increment(ptr1);
    printf("\nValue of num after increment: %d\n", num);

    ptr = NULL;
    ptr1 = NULL;

    return 0;
}