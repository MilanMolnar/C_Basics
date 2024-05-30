#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    numbers[0] = 100;
    printf("%d", numbers[0]); //first elem of numbers array
    return 0;
    
}