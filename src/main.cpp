#include <stdio.h>

int main()
{
    printf("Hello World!\nWhat is your Name?\n>");
    char test[20];
    scanf("%20s", test);
    printf("Your Name is: %s", test);
    return 0;
}