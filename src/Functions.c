#include <stdio.h>
#include <stdlib.h>

double cube(double num); //function signiture (prototyping)

int main()
{
    double number = 3.4;
    printf("%f cubed is: %f", number, cube(number));
    return 0;
}

double cube(double num){
    double result = num * num * num;
    return result;
}