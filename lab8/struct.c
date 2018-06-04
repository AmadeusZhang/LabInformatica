#include <stdio.h>

int main(void) {

    struct point {
        int x;
        int y;
    };

    struct point pt = { 320, 200 };

    printf("%d, %d", pt.x, pt.y);
}