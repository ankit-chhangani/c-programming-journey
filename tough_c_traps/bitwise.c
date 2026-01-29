
#include <stdio.h>

int main() {
   int x=10,y=3;
   int z= x << 1 & 1 ? y | 1 : y ^ 1; /* according to operator precedence x << 1 would be executed first thereafter & and then ternary */
   printf("%d",z);
   /* 
   1. x << 1= 20 as left bitwise shift operator denotes multiplication which multiplies in this way x * 2^n
   2. 20 & 1 which returns false binary of 20= 10100 where last digit is 0 such that 0 & 1 returns 0
   3. y ^ 1 here xor property concludes binary of 10 which is 2 thus the value of z = 2 */
   
    return 0;
}
