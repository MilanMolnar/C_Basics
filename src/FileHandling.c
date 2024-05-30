#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("file.txt", "w"); // w, r, a
    fprintf(fpointer, "Jim, CS\nTom, Mc");

    fclose(fpointer); //closing file by pointer
    return 0;
}