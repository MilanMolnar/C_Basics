#include <stdio.h>

int main()
{
    char name[] = "John"; //immutable
    int age = 30; //muatble
    const char GRADE = "c";
    printf("name: %s, age: %d, grade: %c\n", name, age, GRADE);
    age = 27;
    printf("name: %s, age: %d, grade: %c\n", name, age);
    return 0;
    
}