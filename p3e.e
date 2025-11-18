#include <stdio.h>

int main() {
    int a = 10, b = 0, c = -5;

    if(a > 0 && c > 0) {
        printf("Both a and c are positive numbers.\n");
    } else {
        printf("At least one of a or c is not positive.\n");
    }

    if(a > 0 || b > 0) {
        printf("At least one of a or b is positive.\n");
    } else {
        printf("Neither a nor b is positive.\n");
    }


    if(!(a < 0)) {
        printf("a is not a negative number.\n");
    } else {
        printf("a is a negative number.\n");
    }

    return 0;
}
