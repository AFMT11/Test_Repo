#include <stdio.h>
#include <stdlib.h>

#include "ARM.h"

int main()
{
    int x, y;
    x = 54;
    y = 5;
    printf("Sum of %d & %d = %d\n", x, y, SUM_Variables(x,y));

    printf("Even = %d, Odd = %d\n", !Is_Even(SUM_Variables(x,y)), Is_Even(SUM_Variables(x,y)));
    if(DIV_Variables(x,y) == -1)
        printf("Can't divide by 0!!!\n");
    else
        printf("Div of %d & %d = %d\n", x, y, DIV_Variables(x,y));
    return 0;
}
