
#include <stdio.h>

int main() {
    int x=0, y=5, z=2;
    
    if(x++ && --y || z-- > 0)
    /* short-circuit evaluation occurs when not all operands are evaluated due to the rules of && and || */ 
    {
        printf("inside if block\n");
    }
    printf("x=%d\n y=%d\n z=%d\n",x,y,z);
    /* Here:
    1. x++ evaluates to 0(false), so the right-hand side of && (++y) is skipped.
    2. the result of x++ && ++y is false, so the right-hand side of || (z-- > 0) is evaluated.
    3. z-- > 0 evaluates to true, and as a side effect, z becomes 1.
    4. if condition is true, so "inside if block" is printe.
    x=1
    y=5
    z=1
    */
    
    return 0;
}
