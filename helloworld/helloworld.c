#include <stdio.h>

int main() {
    /*My first program in C*/

    char hey = '!';

    printf("Hello, World!%c \n", hey);

    int x = 2147483647;
    printf("x is: %d\n", x);

    int xx = x+1;
    printf("xx is: %d\n", xx);

    unsigned int y = 4294967295;
    printf("yy is: %u\n", y);

    unsigned int yy = y+3;
    printf("yy is: %u\n", yy);

    return 0;

}