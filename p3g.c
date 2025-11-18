#include <stdio.h>

int main() {
    int x, y;

    x = (1, 2, 3, 4, 5);  


    y = (x++, ++x, x + 10);

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    for(int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}
