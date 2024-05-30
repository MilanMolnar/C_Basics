#include <stdio.h>
#include <stdlib.h>

double a;
double b;
char op;

int main()
{
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter an other number: ");
    scanf("%lf", &b);
    if (op == '+')
    {
        printf("%f", a + b);
    } 
    else if (op == '-')
    {
        printf("%f", a - b);
    }
    else if (op == '*')
    {
        printf("%f", a * b);
    }
    else if (op == '/')
    {
        printf("%f", a / b);
    }
    else
    {
        printf("invalid operator :c");
    }

    return 0;
    
}