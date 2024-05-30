#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fWritepointer = fopen("file.txt", "w"); // w, r, a
    fprintf(fWritepointer, "Jim, CS\nTom, Mc");

    fclose(fWritepointer); //closing file by pointer

    FILE * fReadpointer = fopen("file.txt", "r");

    char line[255];

    fgets(line, 255, fReadpointer); // afeter use the pointer is incremented-
    fgets(line, 255, fReadpointer); // now fReadpointer is pointing to the next line

    printf("%s", line);
    fclose(fReadpointer);
    return 0;
}