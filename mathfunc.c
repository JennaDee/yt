#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x = 45;

    // x = sqrt(x); [if x=9]-- square root [output: 3]
    // x = pow(x, 2); [ 9 to the power of 2 is 81
    // x = round(x); [x=3.14; output: 3.0
    // x = ceil(x); [rounded up]
    // x = floor(x);  [is 3, remember to make the print lf and the floar]
    // x = abs(x); needs <stdlib.h> both int-d
    // x = log(x);
    // x = sin(x);
    // x = cos(x);
    x = tan(x);

    printf("%d", x);

    return 0;
}