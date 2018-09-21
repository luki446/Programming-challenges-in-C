#include <stdio.h>
#include "convs.h"

int main(int argc, char* argv[])
{
    char choose;

    printf("What you want to convert? \n");
    printf("W - weight \n");
    printf("L - lenghth \n");

    choose = getchar();
    getchar();

    switch(choose)
    {
        case 'W':
        weight();
        break;

        case 'L':
        length();
        break;

        default:
        printf("Invalid argument");
    }

    return 0;
}