#include <stdio.h>
#include <stdlib.h>

int global = 3;

int main()
{
    char hello[] = "hello";
    char* hello2 = "hello2";

    int *p = malloc(10);

    printf("hello = %p\n", hello);
    printf("hello2 = %p\n", hello2);
    printf("&hello2 = %p\n", &hello2);

    printf("main = %p\n", main);
    printf("&global = %p\n", &global);
    printf("p = %p\n", p);

    free(p);

    return 0;
}