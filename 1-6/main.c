//WAP to print the name of the user in double quotes.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter name : ");
    scanf("%s",&c);
    printf("\"Hello, %s\"",c);
    return 0;
}
