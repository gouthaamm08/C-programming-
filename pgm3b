#include <stdio.h>

struct student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct student S1 = {101, "AAA", 50};
    struct student S2 = {102, "BBB", 60};
    struct student *ptr;

    ptr = &S1;
    printf("Student 1 Details:\n");
    printf("ID   : %d\n", ptr->id);
    printf("Name : %s\n", ptr->name);
    printf("Mark : %.2f\n\n", ptr->marks);

    ptr = &S2;
    printf("Student 2 Details:\n");
    printf("ID   : %d\n", ptr->id);
    printf("Name : %s\n", ptr->name);
    printf("Mark : %.2f\n", ptr->marks);

    return 0;
}
