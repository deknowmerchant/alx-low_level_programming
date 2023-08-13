#include <stdio.h>

int main(void)
{
    /* Print all single digit numbers of base 10 starting from 0, followed by a new line. */

    int c;
    c = 0;
    while (c < 10) {
        putchar(c + '0');
        c++;
    }
    putchar('\n');
    return (0);
}
