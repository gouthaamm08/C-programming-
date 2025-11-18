#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0) {
        if (num2 > 0) {
            printf("Both numbers are positive.\n");
        } else {
            printf("First number is positive, but second is not.\n");
        }
    } else {
        if (num2 > 0) {
            printf("Second number is positive, but first is not.\n");
        } else {
            printf("Neither number is positive.\n");
        }
    }

    return 0;
}
