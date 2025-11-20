#include <stdio.h>

int main() {
    int totalMarks;
    char grade;
    float percentage;

    printf("Enter total marks obtained (out of 100): ");
    scanf("%d", &totalMarks);

    percentage = (float) totalMarks;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);
    if (grade == 'F')
        printf("Result: Fail\n");
    else
        printf("Result: Pass\n");

    return 0;
}
