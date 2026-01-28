#include <stdio.h>

int main()
{
    int a=3,b=5,c;
    c= (a>b) ? (a = a + 10) : (b = b + 20);
    /* here in the given expression the given condition a>b is false such that the second branch of ternary executes which is b = b+20. */
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    return 0;
    
   /* here value of given variables are expected to be:
    a = 3 (it remains unchanged)
    b = 25 
    c = 25 (ternary not only executes the branches but also returns the value assigned)
    */
}
