#include <stdio.h>

void main() {
    // immediate addressing
    int a = 10;

    // direct addressing
    int b = a;

    // indirect addressing
    int *p = &a;
    int c = *p;

    // register addressing
    register int d = 5;

    // register indirect addressing
    register int *q = &a;
    int e = *q;

    // indexed addressing
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 2;
    int val = arr[2];

    // base addressing, relative addressing
    int *base = arr;
    val = *(base + 3); // base + offset

    // auto increment addressing
    int *r = arr;
    val = *r++;

    // auto decrement addressing
    int *s = arr + 2;
    val = *--p;

    // implied addressing
    int f = 5;
    f++;
}