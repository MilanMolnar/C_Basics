#include <stdio.h>
#include <stdlib.h>

int main()
{
    short a;
    short b;
    printf("Enter first number: ");
    scanf("%hd", &a);
    printf("Enter second number: ");
    scanf("%hd", &b);
    printf("Sum: %hd", a + b);
    return 0;
}