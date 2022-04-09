#include <stdio.h>

int main () {
    int x = 1, y = 2, z = 3;

    // temporary variable declaration for value store
    int t1 = x, t2 = y, t3 = z;

    //when x = y, y = z, z = x;
    x = t2;
    y = t3;
    z = t1;
    printf("x=%d y=%d z=%d\n", x, y, z); // x=2 y=3 z=1

    //when x = z, y = x, z = y;
    x = t3;
    y = t1;
    z = t2;
    printf("x=%d y=%d z=%d", x, y, z); // x=3 y=1 z=2

    return 0;
}