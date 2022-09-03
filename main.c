#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int y = 7;
    int *p;
    p = &x;

    printf("x = %d, value pointed by p = %d\r\n", x, *p);   //5 and 5
    *p = 14;
    printf("x = %d, value pointed by p = %d\r\n", x, *p);   //14 and 14
    p = &y;
    printf("x = %d, value pointed by p = %d\r\n", x, *p);   //14 and 7
    *p = 20;
    printf("x = %d, value pointed by p = %d\r\n", x, *p);   //14 and 20

    return 0;
}
