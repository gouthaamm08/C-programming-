#include <stdio.h>

typedef struct
{
    int id;
    char name[20];
    float marks;
} Student;

int main()
{
    Student s1;

    s1.id = 101;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("ID    : %d\n", s1.id);
    printf("Name  : %s\n", s1.name);
    printf("Marks : %.2f\n", s1.marks);

    return 0;
}
