#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number %d is positive.\n", num);
    } else if (num == 0) {
        printf("The number is zero.\n");
    } else {
        printf("The number %d is not positive.\n", num);
    }

    return 0;
}
