#include <stdio.h>


int getintnum(int num){
    printf("Your int type variable is ");
    return num;
}

unsigned getuintnum(unsigned num){
    printf("Your unsigned int type variable is ");
    return num;
}

double getfloatnum(double num){
    printf("Your double type variable is ");
    return num;
}

char getchar(char str){
    printf("The char type variable is ");
    return str;
}

char* getstring(char str[]){
    printf("The char type array variable is ");
    return str;
}
 