#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); //pointer
    printf("----------------\nYou entered: %d\n----------------", n);
    char string[20];
    printf("\nEnter a max 20char long string(scanf): ");
    scanf("%s", string); //no need for pointers?
    printf("----------------\nYou entered: %s\n----------------", string);
    //problem: only takes chars until 1st space
    char string_fgets[20];
    fgets(string_fgets, 20, stdin);
    printf("\nEnter a max 20char long string (fgets): ");
    scanf("%s", string_fgets); //no need for pointers?
    printf("----------------\nYou entered: %s\n----------------", string);
    return 0;
    
}