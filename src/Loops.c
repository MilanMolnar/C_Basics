#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number = 1;
    int input;

    while(input != number){
        printf("Write the number: ");
        scanf("%d", &input);
    }
    printf("Next loop\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    printf("Next loop\n");

    int list_of_numbers[6] = {6,5,4,3,2,1};

    int length = sizeof(list_of_numbers) / sizeof(list_of_numbers[0]);

    for (int i = 0; i <= length; i++)
    {
        printf("%d\n", list_of_numbers[i]);
    }

    printf("Next loop\n");

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int i,j;
    for(i = 0; i < 3; i++ ){
        for(j=0; j<3; j++){
            printf("%d ", matrix[i][j] );
        }
        printf("\n");
    }
    return 0;

}