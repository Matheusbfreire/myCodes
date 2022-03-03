#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fatorial(int a)
{
    if (a==1) {
        return 1;
    } else {
        return a*fatorial(a-1);
    }
}
