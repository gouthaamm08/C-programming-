#include <stdio.h>
struct student 
{ 
    int id;
    char name[20];
};
void display(struct student S)
{
    printf("ID: %d, Name: %s\n", S.id, S.name);
}
int main()
{
    struct student S1 = {101, "AAA"};
    struct student S2 = {102, "ABC"};
    display(S1);
    display(S2);
    return 0;
}

