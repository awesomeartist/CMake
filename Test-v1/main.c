#include <stdio.h>

#include "swap.h"

int main(int argc, char **argv) {
    int val1 = 10;
    int val2 = 20;

    printf("hello world!\n");
    printf("before swap:\n");
    printf("val1 = %d\nval2 = %d\n", val1, val2);
    swap(&val1, &val2);
    printf("after swap:\n");
    printf("val1 = %d\nval2 = %d\n", val1, val2);

    return 0;
}