#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 5.0;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "CS");
    printf("Student1's name is %s, and is a major in: %s, with a gpa of %f", student1.name, student1.major, student1.gpa);

    return 0;
}