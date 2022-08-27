#include <stdio.h>
#include <stdlib.h>

#include "ARM.h"

int main()
{
    int x, y;
    x = 54;
    y = 34;
    printf("Sum of %d & %d = %d\n", x, y, SUM_Variables(x,y));
    return 0;
}
