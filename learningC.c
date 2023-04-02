// Importing modules
#include <stdio.h>
#include <time.h>

// importing my module
#include "learningC_import.c"


int main()
{
    
    // Declaring start and end time variables of type 'clock_t'.
    clock_t start, end;
    double time_taken = 0.0;
    start = clock();

    // Others variables declarations.
    int num = 0;
    char str[] = {"Hello, World"};
    float arr[4] = {};
    
    // Printing a value of each type variable using the functions.
    printf("\n");
    printf("Hello World\n\n");
    printf("%d\n", getintnum(5));
    printf("%u\n", getuintnum(32));
    printf("%f\n", getfloatnum(6.7));
    printf("%c\n", getchar('d'));
    printf("%s\n", getstring(str));
    
    // Asking to enter with a number
    printf("Enter with your favorite number: ");
    scanf("%d", &num);
    printf("Your favorite number is %d", getintnum(num));
    printf("\n\n");
    
    // Seeing the sizes of some types of variables
    printf("\n\nThe size of an int variable is %llu bytes", sizeof(int));
    printf("\n\nThe size of an float variable is %llu bytes", sizeof(float));
    printf("\n\nThe size of an double variable is %llu bytes", sizeof(double));
    printf("\n\nThe size of an char type variable is %llu bytes", sizeof(char));
    printf("\n\nThe size of an char type array variable is %llu bytes\n\n", sizeof(str));

    // Calculating time taken and dividing per 1000 to find the miliseconds. 
    end = clock();
    time_taken = ((double)(end - start)) / 1000;
    printf("The time taken by execution = %f\n", time_taken);

    return 0;
}
