#include <stdio.h>
#include <stdlib.h>

int main()
{   

    int number = 30;

    int * pNumber = &number; //pNumer stores the memory address of number in a pointer variable

    printf("%p\n", pNumber); //printing the memory address of int number 30 - pointer

    printf("%d", *pNumber); //dereferencing pNumber's pointer

    return 0;
}