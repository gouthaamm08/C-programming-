#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Initial value of a: %d\n", a);
    a++; 
    printf("After a++ (post-increment): %d\n", a);
    ++a; 
    printf("After ++a (pre-increment): %d\n", a);

    printf("\nInitial value of b: %d\n", b);
    b--;
    printf("After b-- (post-decrement): %d\n", b);
    --b; 
    printf("After --b (pre-decrement): %d\n", b);

    int c = a++;
    int d = --b;
    printf("\nValue of c (a++): %d, a is now: %d\n", c, a);
    printf("Value of d (--b): %d, b is now: %d\n", d, b);

    return 0;
}
